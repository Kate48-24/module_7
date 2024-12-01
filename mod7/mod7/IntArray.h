#pragma once

#ifndef INTARRAY_H
#define INTARRAY_H
#include <cassert>
#include <algorithm>
#include "exceptions.h"

class IntArray
{
private:
    int m_length{};
    int* m_data{};

public:
    IntArray() = default;
    IntArray(int length);
    ~IntArray();

    IntArray(const IntArray& a);

    void erase();                                       //удалит массив и установит его длинну 0

    int& operator[](int index);
     
    void reallocate(int newLength);                      //при изменении размера массива уничтожит все существующие в нём элементы

    void resize(int newLength);                         //при изменении размера массива сохранит все существующие в нём элементы

    IntArray& operator=(const IntArray& a);
  
    void insertBefore(int value, int index);            //вставка
    void remove(int index);                             //удаление

    void insertAtBeginning(int value);
    void insertAtEnd(int value);

    int getLength() const { return m_length; }
};
#endif

