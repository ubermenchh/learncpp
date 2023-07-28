#include <iostream>

int main(){

    std::cout << "Enter a Number: ";
    int num{ };
    std::cin >> num;

    std::cout << "Double that Number is " << num * 2 << "\n";
    std::cout << "Triple that Number is " << num * 3 << "\n";

    return 0;
}