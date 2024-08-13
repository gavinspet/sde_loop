#include <memory>
#include <iostream>

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(10);
    std::unique_ptr<int> p2 = std::make_unique<int>(20);

    if (p1 != p2) {
        std::cout << "p1 and p2 point to different objects.\n";
    }

    p2 = std::move(p1); // Move ownership
    if (!p1) {
        std::cout << "p1 is now nullptr.\n";
    }

    return 0;
}
