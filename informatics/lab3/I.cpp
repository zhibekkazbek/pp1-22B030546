/*Напишите программу, которая циклически сдвигает элементы массива вправо (например, если элементы нумеруются, начиная с нуля, то 0-й элемент становится 1-м, 1-й становится 2-м, ..., 
последний становится 0-м, то есть массив {3, 5, 7, 9} превращается в массив {9, 3, 5, 7}).*/

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int *arr = new int[number];

    for(int i=0; i < number; i++){
        cin >> arr[i];
    }

    int last = arr[number - 1];
    for(int i = number - 1; i>=0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
    for(int i=0; i < number; i++){
        cout << arr[i] << " ";
    }
    return 0;
}