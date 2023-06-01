#include <iostream>
#include <sys/utsname.h>

int main() {
    struct utsname info;

    if (uname(&info) != 0) {
        std::cerr << "Error retrieving Linux version" << std::endl;
        return 1;
    }

    std::cout << "System Name :" << info.sysname << std::endl;
    std::cout << "Version :" << info.version << std::endl;
    std::cout << "Machine :" << info.machine << std::endl;
    std::cout << "Linux Kernal: " << info.release << std::endl;
    std::cout << "Release :" << info.release << std::endl;
    return 0;
}


/** 
char  sysname[]  Name of this implementation of the operating system. 
char  nodename[] Name of this node within the communications 
                 network to which this node is attached, if any. 
char  release[]  Current release level of this implementation. 
char  version[]  Current version level of this release. 
char  machine[]  Name of the hardware type on which the system is running.

**/
