/*E-Гипотенуза
Даны два числа a и b – стороны треугольника. Вам нужно написать фукнцию, которая высчитает гипотенузу треугольника.
Используйте функцию setprecision(4) при выводе результата. Для использования этой функции, нужно подключить библиотеку iomanip.*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Hypotenuse(int n, int m){
    return sqrt(n*n + m*m);
}

int main(){
    int a, b; cin >> a >> b;
    cout << setprecision(4) << Hypotenuse(a, b);
}