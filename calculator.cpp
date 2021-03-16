#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>

int main() {
    std::string calcThis;
    std::cout << "Starting calculator..." << std::endl;
    std::cout << "Please input what you want to calculate: ";
    std::cin >> calcThis;
    
    Sleep(500);
    std::cout << "Calculating " << calcThis << std::endl;
    return 0;
}

// 5*5 = 25
// 25/5*15*(15+5)