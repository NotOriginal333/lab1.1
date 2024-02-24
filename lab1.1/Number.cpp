#include <iostream>
#include "Number.h"

using namespace std;

void Number::setFirst(int value) {
    first = value;
}
void Number::setSecond(int value) {
    second = value;
}

bool Number::Init(int x, int y)
{
    setFirst(x);
    if (0 < y)
    {
        setSecond(y);
        return true;
    }
    else
    {
        setSecond(0);
        return false;
    }
}
void Number::Read() {
    int x;
    unsigned int y;
    int atmpt = 0;
    do
    {
        if (atmpt > 0) cout << "Try another numbers!" << endl;
        cout << "First = "; cin >> x;
        cout << "Second = "; cin >> y;
        atmpt++;
    } while (!Init(x, y));
}


void Number::Display() const {
    cout << "First: " << getFirst() << endl;
    cout << "Second: " << getSecond() << endl;
}

void Number::multiply(int num) {
    first *= num;
    second *= num;
    cout << "1: " << first << endl;
    cout << "2: " << second << endl;
}
