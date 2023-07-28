#include <iostream>

void doNothing(int&) {

}

int main() {
    int x;
    doNothing(x); // this function makes the compiler think that we are assigning value to this variable
    std::cout << x << "\n";
    return 0;
}

// result of code whose behaviour is not well defined by C++ lang is called Undefined Behaviour.