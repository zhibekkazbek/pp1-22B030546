/*Дан массив, состоящий из целых чисел. Нумерация элементов начинается с 0. 
Напишите программу, которая выведет элементы массива, номера которых четны (0, 2, 4...).
Необходимо вывести все элементы массива с чётными номерами.
*/

#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i%2==0) cout << arr[i] << " ";
    }
    return 0;
}