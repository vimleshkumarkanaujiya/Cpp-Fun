#include <iostream>
#include <sys/utsname.h>

int main() {
    struct utsname info;

    if (uname(&info) != 0) {
        std::cerr << "Error retrieving Linux version" << std::endl;
        return 1;
    }

    std::cout << "Linux version: " << info.release << std::endl;

    return 0;
}
