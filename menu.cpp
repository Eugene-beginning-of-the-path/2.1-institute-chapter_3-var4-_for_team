#include <iostream>
#include "Pair.h"
#include "Rectangle.h"

using namespace std;

void print_Pair(Pair& class_pair);
void print_Rectangle(Rectangle& class_ractangle);

void menu()
{
    Pair class_pair;
    print_Pair(class_pair);

    Pair class_pair1(5, 9);
    print_Pair(class_pair1);
    cout << endl << endl;

    Rectangle class_ractangle;
    print_Rectangle(class_ractangle);

    Rectangle class_ractangle1(3, 4, 5, 6);
    print_Rectangle(class_ractangle1);
}

void print_Pair(Pair& class_pair) //������� ������ �������� ������ Pair
{
    static int i = 1;
    cout << "class_pair" << i++ << ".multiplication()= " << class_pair.multiplication() << endl;
}

void print_Rectangle(Rectangle& class_ractangle) //������� ������ �������� ������ Rectangle
{
    static int i = 1;
    cout << "rectangle" << i++ << ".perimeter= " << class_ractangle.perimeter() << "| area= " << class_ractangle.area() << std::endl << std::endl;
}