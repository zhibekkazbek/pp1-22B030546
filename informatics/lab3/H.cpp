/*Напишите программу, которая переставляет соседние элементы массива (1-й элемент поменять с 2-м, 3-й с 4-м и т.д.
Если элементов нечетное число, то последний элемент остается на своем месте).*/

#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    for(int i = 1; i < n; i+=2){
        int q = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = q;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}