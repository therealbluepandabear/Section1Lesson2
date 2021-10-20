#include <iostream>

int main() {
    std::cout << "In Visual Studio, a C++ program consists of source files (including header files and .cpp files) which are organized in a project which is stored inside a solution" << "\n";

    std::cout << "In C++ you can specify comments in two ways:" << "\n";

    // Like this (single line comment)
    /*
     * Or like this (multiline comment)
     */

    const std::string header_name = "iostream";

    std::cout << "The next thing we have is a header file called " << header_name << "\n";

    std::cout << "Then we have our main() function which is automatically invoked by the runtime." << "\n";

    return 0;
}
