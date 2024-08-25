#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::condition_variable cv;
std::mutex mtx;
bool flag = true;

int i = 1; // shared resource
int MAX_LIMIT = 99;

void odd() {
  while (i <= MAX_LIMIT) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return flag; });
    if (i <= MAX_LIMIT)
      std::cout << i << std::endl;
    i++;
    flag = false;
    cv.notify_one();
  }
}

void even() {
  while (i <= MAX_LIMIT) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return !flag; });
    if (i <= MAX_LIMIT)
      std::cout << i << std::endl;
    i++;
    flag = true;
    cv.notify_one();
  }
}

int main() {
  std::thread t1(odd);
  std::thread t2(even);

  t1.join();
  t2.join();
}