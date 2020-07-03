#include <iostream>

int main() {

    int horse{8}, cow{9};
    std::cout << (cow++, horse++)  << std::endl;
    std::cout << horse << std::endl;

    return 0;

}
