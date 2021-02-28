#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b){
    while(b != 0){
        unsigned int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main(){
    int a, b;
    std::cout << "Enter First Integer: ";
    std::cin >> a;
    
    std::cout << "Enter Second Integer: ";
    std::cin >> b;

    std::cout << "The gcd of two number is " << gcd(a, b) << std::endl;
    return 0;
}
