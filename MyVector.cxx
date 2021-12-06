#include "MyVector.h"
#include <iostream>

// int* newarray = new int[size]();

template <class T> 
MyVector<T>::MyVector() { 
    initial_size = 5; 
    real_size = 0;
    data = new T[initial_size]; 
}

template <class T> 
int MyVector<T>::size() { 
    return real_size; 
}

template <class T> 
T &MyVector<T>::operator[] (int i) { 
    return data[i];
}

template <class T> 
void MyVector<T>::push_back(T item) { 
    if(real_size < initial_size) { 
        data[real_size] = item; 
        real_size++;
    }
}

template <class T> 
void MyVector<T>::resize() { 
    initial_size += GROWTH; 
    T *temp = new T[initial_size]; 
    for(int i = 0; initial_size - GROWTH; i++) { 
        temp[i] = data[i]; 
    }

    delete[] data; 
    data = temp; 
}