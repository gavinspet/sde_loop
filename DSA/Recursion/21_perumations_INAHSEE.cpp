#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define eeshani
#ifdef eeshani
void solve(int index, string s) {
  if (index == s.size()) {
    cout << s << endl;
    return;
  }

  for (int i = index; i < s.size(); i++) {
    swap(s[i], s[index]);
    solve(index + 1, s);
    swap(s[i], s[index]);
  }
}
#endif eeshani

int main() {
  string s = "INASEE";
  solve(0, s);
}