#include <string>
#include <sstream>

using namespace std;

/**
 * A Simple HelloWorld Class in C++ using C++11 and STL
 */
class Hello {
    public:
        /**
         * Return the string "Hello world"
         * @return A {@code string} containing "Hello world"
         */
        string sayHello() {
            return "Hello world";
        }

        /**
         * Return a string containing "Hello " + the input string
         * @param name A {@code string} to be appended to the "Hello " message
         * @return A {@code string} containing "Hello " appended with the input string
         */
        string sayHello(string name) {
            ostringstream stream;
            stream << "Hello " << name << endl;
            return stream.str();
        }
};