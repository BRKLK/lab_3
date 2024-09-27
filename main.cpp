#include <iostream>
#include <math.h>

using namespace std;
// Лабораторная №3 Вариант 4
// Установить i-ый бит числа х (0<x<10^9) в 1.


int main() {
    int x, i;
    cout << "Enter a number for x: "; cin >> x;
    cout << "Enter a number for i: "; cin >> i;
    cout << "The number x with the i-th bit setted to 1 equals " << (x | (int)pow(2, i-1));
    return 0;
}