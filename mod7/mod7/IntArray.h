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

    void erase();                                       //������ ������ � ��������� ��� ������ 0

    int& operator[](int index);
     
    void reallocate(int newLength);                      //��� ��������� ������� ������� ��������� ��� ������������ � �� ��������

    void resize(int newLength);                         //��� ��������� ������� ������� �������� ��� ������������ � �� ��������

    IntArray& operator=(const IntArray& a);
  
    void insertBefore(int value, int index);            //�������
    void remove(int index);                             //��������

    void insertAtBeginning(int value);
    void insertAtEnd(int value);

    int getLength() const { return m_length; }
};
#endif

