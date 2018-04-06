/* Copyright <YEAR> <COPYRIGHT HOLDER>
 * 
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the 
 * documentation and/or other materials provided with the distribution.
 * 
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from 
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

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

        void sayHelloLots() {
            vector<string> strings = vector<string>();
            for (int x=0; x<40; x++) {
                strings.push_back("Hello");
            }
            for (string item: strings) {
                cout << item << "\n";
            }
        }
};