#include <iostream>

using namespace std; // We can open namespaces like so, in this case we are opening the namespace called std.

void func_m();

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
    std::cout << "Using multiple insertion operators in one statement is called cascading of operators." << "\n";

    std::cout << "If we print code without an newline operator or std::endl we will not get to a newline - which is not we want. endl - called a manipulator - can manipulate/affect the output. It also flushes the output buffer, which ensures the string is immediately printing on the screen.\n";

    std::cout << "At the end of main we also return 0, this value will go to the operating system.\n";

    std::cout << "When programming, if we encounter a syntax error, we will get a red underline or an error list.\n";

    func_m();

    std::flush(std::cout);

    return 0;
}

namespace MyNamespace {
    // A namespace is a way to wrap a type so that they are not visible outside.
    void func() {

    }
}

// Instead of opening namespaces, we can access them using their full qualified name like so:

void func_m() {
    MyNamespace::func();
}
