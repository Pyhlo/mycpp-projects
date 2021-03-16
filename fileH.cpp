#include <fstream>
#include <string>
#include <iostream>

int writeToFile(std::string filename, std::string text) {
    
    return 0;
}

int main() {
    char data[100];
    
    std::string filename;
    std::cout << "What is the filename? ";
    std::cin >> filename;
    
    //std::string text;
    std::cout << "What do you want to write to the file? ";
    std::cin >> data;

    std::ofstream outfile;
    outfile.open(filename + ".dat");

    outfile << data << std::endl;
    return 0;
}