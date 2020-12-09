#include <iostream>

using namespace std;

class Pair
{
    int number1 = 2; 
    int number2 = 3;
public:
    Pair()
    {

    }

    Pair(int val_1, int val_2) //!конструктор по умолчанию с параметрами по умолчанию + списком инициализации
    {
        number1 = val_1;
        number2 = val_2;
    }

    int multiplication() { return get_number1() * get_number2(); } //функция перемножения двух чисел

    void setm_value1(int num) { number1 = num; } //функция дуступа - сеттер
    void setm_value2(int num) { number2 = num; } //функция дуступа - сеттер

    int get_number1() { return number1; } //функция дуступа - геттер
    int get_number2() { return number2; } //функция дуступа - геттер

};

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
        this->length = length;
        this->width = width;
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
        if (width) //если новое устанавливаемое значение для m_width>0 - все ОК, иначе выведится текст, что такое значение не подходит(остается прежним)
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

int main()
{

    Pair class_pair;
    cout << "class_pair.multiplication()= " << class_pair.multiplication() << endl;

    Pair class_pair1(5,9);
    cout << "class_pair1.multiplication()= " << class_pair1.multiplication() << endl;

    cout << endl << endl;

    Rectangle class_ractangle;
    cout << "class_ractangle.perimeter()= " << class_ractangle.perimeter() << endl;
    cout << "class_ractangle.area()= " << class_ractangle.area() << endl << endl;

    Rectangle class_ractangle1(3,4,5,6);
    cout << "class_ractangle1.perimeter()= " << class_ractangle1.perimeter() << endl; 
    cout << "class_ractangle1.area()= " << class_ractangle1.area() << endl << endl;
}


