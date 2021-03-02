#include <iostream>

unsigned int gcd(unsigned int a, unsigned int b){
    while(b != 0){
        unsigned int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int const a, int const b){
    int h = gcd(a, b);
    return h ? (a * (b / h)) : 0;
}

int main(){
    int a, b;
    std::cout << "Enter First Integer: ";
    std::cin >> a;
    
    std::cout << "Enter Second Integer: ";
    std::cin >> b;

    std::cout << "The gcd of two number is " << lcm(a, b) << std::endl;
    return 0;
}
