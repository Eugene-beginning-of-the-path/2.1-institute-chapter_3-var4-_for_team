#pragma once

class Pair
{
    int number1 = 2;
    int number2 = 3;
public:
    Pair()
    {

    }

    Pair(int val_1, int val_2) //!����������� �� ��������� � ����������� �� ��������� + ������� �������������
    {
        number1 = val_1;
        number2 = val_2;
    }

    int multiplication() { return get_number1() * get_number2(); } //������� ������������ ���� �����

    void setm_value1(int num) { number1 = num; } //������� ������� - ������
    void setm_value2(int num) { number2 = num; } //������� ������� - ������

    int get_number1() { return number1; } //������� ������� - ������
    int get_number2() { return number2; } //������� ������� - ������

};