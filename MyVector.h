#pragma once

const int GROWTH = 5; 

template <class T> 
class MyVector { 
    public: 
        MyVector(); 
        int size(); 
        // int capacity(); 
        // void empty();
        void push_back(T item); 
        // void pop_back(T item);
        // void pop_back(); 
        // void clear(); 
        T &operator[] (int i); 
        void resize();

    private:
        T *data;
        int initial_size; 
        int real_size; 
}; 

#include "MyVector.cxx"