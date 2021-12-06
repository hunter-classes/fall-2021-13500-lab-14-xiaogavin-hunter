#include "MyVector.h"
#include <iostream>

// int* newarray = new int[size]();

template <class T> 
MyVector<T>::MyVector() { 
    capacity_of_array = 1; 
    real_size = 0;
    data = new T[capacity_of_array]; 
}

template <class T> 
int MyVector<T>::size() { 
    return real_size; 
}

template <class T> 
T &MyVector<T>::operator[] (int i) { 
    // needs to check array for its current size and data 
    if(std::is_lvalue_reference<T>::value && i > real_size) {
        
    }

    return data[i];
}

template <class T> 
void MyVector<T>::push_back(T item) { 
    if(real_size < capacity_of_array) { 
        data[real_size] = item; 
        real_size++;
    } else { 
        resize(); 
        data[real_size] = item; 
        real_size++;
    }
}

template <class T> 
void MyVector<T>::resize() { 
    capacity_of_array *= GROWTH_FACTOR; 
    T *temp = new T[capacity_of_array]; 
    for(int i = 0; i < capacity_of_array / GROWTH_FACTOR; i++) { 
        temp[i] = data[i]; 
    }

    delete[] data; 
    data = temp; 
}

template <class T> 
int MyVector<T>::capacity() { 
    return capacity_of_array; 
}

template <class T> 
void MyVector<T>::pop_back() { 
    T *temp = new T[capacity_of_array]; 
    for(int i = 0; i < real_size - 1; i++) { 
        temp[i] = data[i]; 
    }

    real_size--;
    delete[] data; 
    data = temp; 
    
}

template <class T>
bool MyVector<T>::empty() { 
    return real_size == 0; 
}

template <class T>
void MyVector<T>::clear() { 
    delete[] data; 
    data = nullptr; 
    real_size = 0; 
    capacity_of_array = 0;
}
