#pragma once
#include <iostream>
#include "Pair.h"

using namespace std;

class Rectangle : public Pair
{
    int length = 3; //высота прямоугольника 
    int width = 4;  //ширина прямоугольника 
public:

    Rectangle()
    {

    }

    Rectangle(int lenght, int width) //конструктор 
    {
        if (lenght > 0 && width > 0)
        {
            this->length = length;
            this->width = width;
        }
        else
            cout << "Lenght or width <= 0!"; // если lenght < 0 или width < 0 - значения не присвоятся т.к. значения недопустимы(меньше нуля) 
    }

    Rectangle(int lenght, int width, int number1 = 4, int number2 = 5) : Pair(number1, number2)
    {
        if (lenght > 0 && width > 0)
        {
            this->length = lenght;
            this->width = width;
        }
        else
            cout << "Lenght or width <= 0!"; // если lenght < 0 или width < 0 - значения не присвоятся т.к. значения недопустимы(меньше нуля) 
    }

    void setm_length(int length) //функция дуступа - сеттер
    {
        if (length > 0)  //если новое устанавливаемое значение для m_length>0 - все ОК, иначе выведится текст, что такое значение не подходит(остается прежним)
            this->length = length;
        else
            cout << "length <= 0!" << endl;
    }

    void setm_width(int width) //функция дуступа - сеттер
    {
        if (width > 0) //если новое устанавливаемое значение для m_width>0 - все ОК, иначе выведится текст, что такое значение не подходит(остается прежним)
            this->width = width;
        else
            std::cout << "your width <= 0!";
    }

    int perimeter() //функция нахождения периметра прямоугольника с полями m_length и m_width
    {
        return get_length() * 2 + get_width() * 2;
    }

    int area() //функция нахождения площади прямоугольника с полями m_length и m_width
    {
        return get_length() * get_width();
    }

    int get_length() { return length; } //функция дуступа - геттер
    int get_width() { return width; }   //функция дуступа - геттер
};
