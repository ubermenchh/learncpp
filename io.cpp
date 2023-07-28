#include <iostream> // input/output library, part of C++ std library. It deals with basic input and output.

int main() {
    int x{7};
    // std::cout ==> cout stands for character output. It allows us to send data to the console to be printed as text.
    std::cout << "Enter a number: ";
    int y{ };
    // std::cin  ==> cin stands for character input. It reads input from keyboard using the extraction operator.
    std::cin >> y;
    std::cout << "X = " << x << ", Y = " << y << "\n";
}

/*
    std::cout functions in following way:
        - statemens in program request the output to be sent to the console.
        - the output is not sent immediately but it is stored in a seperate section of memory called BUFFER.
        - these requests are FLUSHED, i.e., all the data in the the buffer is transfered to its destination.

    \n is preferred over std::endl
        - std::endl does 2 things, first it moves the cursor to the next line and it also flushes the buffer.
        - it is more efficient to let the system flush itself periodically. Also we don't need to flush the buffer after every line.
*/