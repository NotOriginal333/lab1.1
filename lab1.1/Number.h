#pragma once

class Number {
private:
	int first;
	int second;
public:
    int getFirst() const { return first; };
    int getSecond() const { return second; };

    void setFirst(int value);
    void setSecond(int value);

    bool Init(int, int);
    void Read();
    void Display() const;
    void multiply(int);
};
//Реалізувати клас Number. Поле first – ціле число, ціла частина числа; поле second – 
//додатне ціле число, дробова частина числа.Реалізувати метод multiply() – множення на
//довільне ціле число типу int.Метод має правильно працювати при будь - яких допустимих
//значеннях first і second.