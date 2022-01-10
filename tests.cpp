#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include <string>
#include "doctest.h" 
#include "MyVector.h"

TEST_CASE(".size()") { 
    SUBCASE("Empty MyVector") { 
        MyVector<int> t1; 

        CHECK(t1.size() == 0);
    }

    SUBCASE("MyVector with 4 elements") {
        MyVector<std::string> t2; 
        t2.push_back("test1");
        t2.push_back("test2");
        t2.push_back("test3");
        t2.push_back("test4");

        CHECK(t2.size() == 4);
    }

    SUBCASE("MyVector with 1 element") { 
        MyVector<float> t3;
        t3.push_back(1);

        CHECK(t3.size() == 1);
    }
}

TEST_CASE(".capacity()") { 
    // .capacity() returns amount of memory used for a MyVector, each element uses 1, and is scaled by current capac * 2, when size > capacity 
    MyVector<int> nums;
    SUBCASE("MyVector with 0 items") { 
        CHECK(nums.capacity() == 0); 
    }

    SUBCASE("MyVector with 3 items") { 
        for(int i = 0; i < 3; i++) { 
            nums.push_back(i);
        }

        CHECK(nums.capacity() == 1 * 2 * 2); 
    }

    SUBCASE("MyVector with 10 items") { 
        for(int i = 0; i < 10; i++) { 
            nums.push_back(i);
        }

        CHECK(nums.capacity() == 1 * 2 * 2 * 2 * 2); 
    }
}

TEST_CASE(".empty()") { 
    // .empty() returns true if the container size is 0, else false : meaning that theres nothing in the array return true
    SUBCASE("Empty MyVector") { 
        MyVector<int> t; 
        CHECK(t.empty() == true); 
    }

    SUBCASE("MyVector with 1 element") { 
        MyVector<double> t1;
        t1.push_back(3.0);

        CHECK(t1.empty() == false);
    }
    
    SUBCASE("MyVector with 3 elements") { 
        MyVector<std::string> t2; 
        t2.push_back("test1");
        t2.push_back("test2");
        t2.push_back("test3");
        
        CHECK(t2.empty() == false); 
    }
}

TEST_CASE(".push_back(item)") { 
    // .push_back(item) adds an item onto the MyVector at the last spot 
    SUBCASE("MyVector with 1 units") { 
        MyVector<int> t;
        t.push_back(1);

        CHECK(t[0] == 1); 
    }

    SUBCASE("MyVector with 5 units") { 
        MyVector<std::string> t1;
        std::string texts[5];

        for(int i = 0; i < 5; i++) { 
            t1.push_back("text" + std::to_string(i));
            texts[i] = "text" + std::to_string(i);
        }

        for(int i = 0; i < 5; i++) {
            CHECK(t1[i] == texts[i]);  
        }
    }

    SUBCASE("MyVector with 10 units") { 
        MyVector<double> nums; 
        double value = 2141;
        double vals[10]; 

        for(int i = 0; i < 10; i++) { 
            value /= 2.0;
            nums.push_back(value);
            vals[i] = value;
        }

        for(int i = 0; i < 10; i++) { 
            CHECK(nums[i] == vals[i]);
        }
    }
}

TEST_CASE(".pop_back(n)") { 
    // removes item at n 
    SUBCASE("int value, 0 to 9: removing 5") { 
        MyVector<int> nums;
        int check[9] = { 0, 1, 2, 3, 4, 6, 7, 8, 9 }; 

        for(int i = 0; i < 10; i++) { 
            nums.push_back(i);
        }

        nums.pop_back(5);

        for(int i = 0; i < nums.size(); i++) { 
            CHECK(check[i] == nums[i]);
        }
    }

    SUBCASE("int values -10 to 10: removing -5 to 5 inclusive") { 
        MyVector<int> nums; 
        int check[10] = { -10, -9, -8, -7, -6, 6, 7, 8, 9, 10 }; 

        for(int i = -10; i <= 10; i++) { 
            nums.push_back(i);
        }        

        for(int i = 0; i < 11; i++) { 
            nums.pop_back(5);
        }

        for(int i = 0; i < nums.size(); i++) { 
            CHECK(nums[i] == check[i]);
        }
        
    }
}

TEST_CASE(".pop_back()") { 
    // removes last item from MyVector
    MyVector<int> temp;
    int values[50];

    for(int i = 0; i < 50; i++) { 
        values[i] = i;
        temp.push_back(i); 
    }

    SUBCASE("pop_back() ran 10 times") { 
        int total_of_vector = 0;
        int total_of_array = 0;

        for(int i = 0; i < 10; i++) {
            temp.pop_back();
        }

        for(int i = 0; i < temp.size(); i++) { 
            total_of_vector += temp[i];
            total_of_array += values[i];
        }

        CHECK(total_of_vector == total_of_array);
        CHECK(temp.size() == 40);
    }

    SUBCASE("pop_back() ran 25 times") { 
        int total_of_vector = 0;
        int total_of_array = 0;

        for(int i = 0; i < 25; i++) {
            temp.pop_back();
        }

        for(int i = 0; i < temp.size(); i++) { 
            total_of_vector += temp[i];
            total_of_array += values[i];
        }

        CHECK(total_of_vector == total_of_array);
        CHECK(temp.size() == 25);
    }

    SUBCASE("pop_back() ran 50 times") { 
        int total_of_vector = 0;
        int total_of_array = 0;

        for(int i = 0; i < 50; i++) {
            temp.pop_back();
        }

        for(int i = 0; i < temp.size(); i++) { 
            total_of_vector += temp[i];
            total_of_array += values[i];
        }

        CHECK(total_of_vector == total_of_array);
        CHECK(temp.size() == 0);
    }
}

TEST_CASE(".clear()") { 
    SUBCASE("MyVector<int>") { 
        MyVector<int> nums;
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(1);

        CHECK(nums.size() == 6);

        SUBCASE(".clear() ran") { 
            nums.clear();
            CHECK(nums.size() == 0);
        }
    }

    SUBCASE("MyVector<std::string>") { 
        MyVector<std::string> str;
        str.push_back("test");
        str.push_back("1231231");

        CHECK(str.size() == 2);

        SUBCASE(".clear() ran") { 
            str.clear();
            CHECK(str.size() == 0);
        }
    }

    SUBCASE("MyVector<float>") { 
        MyVector<float> nums;
        nums.push_back(1.6);
        nums.push_back(1.2);
        nums.push_back(45);
        nums.push_back(6);
        nums.push_back(1414);
        nums.push_back(155);
        nums.push_back(155);
        nums.push_back(155);

        CHECK(nums.size() == 8);

        SUBCASE(".clear() ran") { 
            nums.clear();
            CHECK(nums.size() == 0);
        }
    }
}

TEST_CASE("[] operator") { 
    // either replaces item at n, or returns value at n in MyVector
    MyVector<int> nums; 
    for(int i = 0; i < 10; i++) {
        nums.push_back(i);
    }

    for(int i = 0; i < nums.size(); i++) { 
        CHECK(nums[i] == i);
    }

    SUBCASE("Changing nums at i to 100 + i") { 
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = i + 100;
            CHECK(nums[i] == i + 100);
        }
    }
}