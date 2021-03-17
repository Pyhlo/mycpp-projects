#include <iostream>
#include <string>
#include <maps>
#include <stdio.h>


std::vector<std::string> names;
void print_vector(std::vector<std::string> vector) {
    for(int i = 0; i <vector.size(); i++) {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;
}

int createNew(std::string name, int bal) {
    names.push_back(name);
    return 0;
}

void test() {
    print_vector(names);
}

