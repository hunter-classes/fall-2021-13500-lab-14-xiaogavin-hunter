#include <iostream>
#include "MyVector.h" 

int main() { 
    MyVector<int> t; 
    
    t.push_back(100);
    t.push_back(101);
    t.push_back(100);
    t.push_back(101);
    t.push_back(101);

    std::cout << t[0] << std::endl;
    std::cout << t[1] << std::endl;
    std::cout << t[2] << std::endl;
    std::cout << t[3] << std::endl;
    std::cout << t[4] << std::endl;
    std::cout << "\n============" << std::endl;
    std::cout << t.size() << std::endl;
    std::cout << t.capacity() << std::endl;
    std::cout << "\n============" << std::endl;

    std::cout << t[0] << std::endl;
    std::cout << t[1] << std::endl;
    std::cout << t[2] << std::endl;
    std::cout << t[3] << std::endl;
    std::cout << t[4] << std::endl;

    t[6] = 100; 
    std::cout << t[6] << std::endl; 


    // t.pop_back();
    // t.pop_back();
    // t.pop_back();
    // t.pop_back();
    // t.pop_back();

    // std::cout << "\n============" << std::endl;
    // std::cout << t.size() << std::endl;
    // std::cout << t.capacity() << std::endl;
    // std::cout << "\n============" << std::endl;

    // std::cout << t.empty() << std::endl;
    // t.push_back(101);
    // std::cout << t.empty() << std::endl;

    // t.clear();
    // std::cout << "\n============" << std::endl;
    // std::cout << t.size() << std::endl;
    // std::cout << t.capacity() << std::endl;
    // std::cout << "\n============" << std::endl;




    // t.pop_back(); 

    // std::cout << t.size() << std::endl;
    // std::cout << t[1] << std::endl;

    // MyVector<std::string> s;
    // s.push_back("Test");
    // std::cout << s[0] << std::endl;
    // std::cout << s.size() << std::endl;

    // std::cout << t.capacity() << std::endl;

    return 0;
}