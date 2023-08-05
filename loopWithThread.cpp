#include <iostream>
#include <thread>

int main() {
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    // It will never reach 'return 0' due to the infinite loop.
    return 0;
}
