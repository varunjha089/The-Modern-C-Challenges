#include <iostream>

int main(){
    unsigned int limit = 0;
    std::cout << "Upper Limit: ";
    std::cin >> limit;

    unsigned long long sum = 0;
    for (unsigned int i = 3; i < limit; ++i){
        if (i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
    }

    std::cout << "Sum = " << sum << std::endl;
    return 0;
}