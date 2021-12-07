#pragma once

const int GROWTH_FACTOR = 2; 

template <class T> 
class MyVector { 
    public: 
        MyVector(); 
        int size(); 
        int capacity(); 
        bool empty();
        void push_back(T item); 
        void pop_back(int i);
        void pop_back(); 
        // Removes the last element in the vector, effectively reducing the container size by one.
        void clear(); 
        T &operator[] (int i); 
        void resize();

    private:
        T *data;
        int capacity_of_array; 
        int real_size; 
}; 

#include "MyVector.cxx"