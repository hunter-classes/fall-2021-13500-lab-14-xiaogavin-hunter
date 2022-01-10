#include <iostream>
#include "MyVector.h" 

int main() { 
    MyVector<int> nums; 
    
    for(int i = 0; i < 10; i++) { 
        nums.push_back(i);
    }

    nums[5] = 50;

    for(int i = 0; i < nums.size(); i++) { 
        std::cout << nums[i] << " ";
    }

    std::cout << std::endl;

    MyVector<std::string> num_in_words;
    num_in_words.push_back("one");
    num_in_words.push_back("two");
    num_in_words.push_back("three");
    num_in_words.push_back("four");
    num_in_words.push_back("five");
    num_in_words.push_back("six");
    num_in_words.push_back("seven");
    num_in_words.push_back("eight");
    num_in_words.push_back("nine");
    num_in_words.push_back("ten");

    for(int i = 0; i < num_in_words.size(); i++) { 
        std::cout << num_in_words[i] << " ";
    }

    std::cout << std::endl;

    num_in_words.pop_back();
    num_in_words.pop_back();
    num_in_words.pop_back();
    num_in_words.pop_back(2);

    for(int i = 0; i < num_in_words.size(); i++) { 
        std::cout << num_in_words[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}