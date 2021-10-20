#include <iostream>

using namespace std; // We can open namespaces like so, in this case we are opening the namespace called std.

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

    std::cout << "We can print a message on a screen using the object called 'cout' which is inside the " << header_name << " header file." << "\n";
    std::cout << "Although it's not directly accessible as it's contained inside a namespace called std." << "\n";

    std::cout << "cout represents the user's screen. So, if we want to print something onto the screen we need to insert that into cout which is done with the insertion operator (<<)." << "\n";

    std::cout << "In one " << "statement " << "we can write " << "multiple " << "insertion operators." << "\n";

    return 0;
}

namespace MyNamespace {
    // A namespace is a way to wrap a type so that they are not visible outside.
}
