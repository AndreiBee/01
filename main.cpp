#include "lib.h"

#include <iostream>

int main(int, char **)
{
    std::cout << "Version: " << version() << std::endl;
    std::cout << "Hello, world!" << std::endl;
    std::cout << "Finish" << std::endl;
    return 0;
}
