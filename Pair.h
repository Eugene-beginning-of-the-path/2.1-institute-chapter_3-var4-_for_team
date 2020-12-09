#pragma once

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