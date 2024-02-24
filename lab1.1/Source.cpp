#include <iostream> 
#include "Number.h" 

using namespace std;

Number makeNumber() {
        Number obj;
        obj.Read();
        obj.Display();
        return obj;
}


int main() {
    Number i;
    i = makeNumber();
    int num;
    cout << "Multiplier = "; cin >> num; cout << endl;
    i.multiply(num);
    return 0;
}