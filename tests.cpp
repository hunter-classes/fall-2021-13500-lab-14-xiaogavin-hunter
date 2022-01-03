#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN 

#include <string>
#include "doctest.h" 
#include "MyVector.h"

TEST_CASE(".size()") { 
    SUBCASE("Empty vector") { 
        MyVector<int> t1; 

        CHECK(t1.size() == 0);
    }

    SUBCASE("Vector with 4 elements") {
        MyVector<std::string> t2; 
        t2.push_back("test1");
        t2.push_back("test2");
        t2.push_back("test3");
        t2.push_back("test4");

        CHECK(t2.size() == 4);
    }

    SUBCASE("Vector with 1 element") { 
        MyVector<float> t3;
        t3.push_back(1);

        CHECK(t3.size() == 1);
    }
}

TEST_CASE(".capacity()") { 
    // .capacity returns amount of memory used for a vector, each element uses 1, and is scaled exponentially 2^x
}