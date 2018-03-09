//
// Created by dphillips on 3/2/18.
//

#ifndef INCLUDE_STRING_STL
#define INCLUDE_STRING_STL
#include <string>
#include <sstream>
#endif

#ifndef IPMI_EXERCISES_HELLO_H
#define IPMI_EXERCISES_HELLO_H

using namespace std;

/**
 * A Simple HelloWorld Class in C++ using C++11 and STL
 */
class Hello {
    public:
        string sayHello() {
            return "Hello world";
        }

        string sayHello(string name) {
            ostringstream stream;
            stream << "Hello " << name << endl;
            return stream.str();
        }
};


#endif //IPMI_EXERCISES_HELLO_H
