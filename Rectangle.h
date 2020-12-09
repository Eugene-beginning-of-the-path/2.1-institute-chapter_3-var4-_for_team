#pragma once
#include <iostream>
#include "Pair.h"

using namespace std;

class Rectangle : public Pair
{
    int length = 3; //������ �������������� 
    int width = 4;  //������ �������������� 
public:

    Rectangle()
    {

    }

    Rectangle(int lenght, int width) //����������� 
    {
        if (lenght > 0 && width > 0)
        {
            this->length = length;
            this->width = width;
        }
        else
            cout << "Lenght or width <= 0!"; // ���� lenght < 0 ��� width < 0 - �������� �� ���������� �.�. �������� �����������(������ ����) 
    }

    Rectangle(int lenght, int width, int number1 = 4, int number2 = 5) : Pair(number1, number2)
    {
        if (lenght > 0 && width > 0)
        {
            this->length = lenght;
            this->width = width;
        }
        else
            cout << "Lenght or width <= 0!"; // ���� lenght < 0 ��� width < 0 - �������� �� ���������� �.�. �������� �����������(������ ����) 
    }

    void setm_length(int length) //������� ������� - ������
    {
        if (length > 0)  //���� ����� ��������������� �������� ��� m_length>0 - ��� ��, ����� ��������� �����, ��� ����� �������� �� ��������(�������� �������)
            this->length = length;
        else
            cout << "length <= 0!" << endl;
    }

    void setm_width(int width) //������� ������� - ������
    {
        if (width > 0) //���� ����� ��������������� �������� ��� m_width>0 - ��� ��, ����� ��������� �����, ��� ����� �������� �� ��������(�������� �������)
            this->width = width;
        else
            std::cout << "your width <= 0!";
    }

    int perimeter() //������� ���������� ��������� �������������� � ������ m_length � m_width
    {
        return get_length() * 2 + get_width() * 2;
    }

    int area() //������� ���������� ������� �������������� � ������ m_length � m_width
    {
        return get_length() * get_width();
    }

    int get_length() { return length; } //������� ������� - ������
    int get_width() { return width; }   //������� ������� - ������
};
