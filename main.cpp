#include <iostream>
#include "MyVector.h"

int main() { 
    MyVector<int> t; 
    
    t.push_back(100);
    t.push_back(101);
    std::cout << t[0] << std::endl;
    std::cout << t[1] << std::endl;

    std::cout << t.size() << std::endl;

    return 0;
}