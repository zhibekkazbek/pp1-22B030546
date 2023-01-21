/*Дан массив, состоящий из целых чисел. Напишите программу, которая подсчитает количество элементов массива, 
больших предыдущего (элемента с предыдущим номером).*/

#include <iostream>
using namespace std;
int main(){
    int n, cnt=0; cin >> n;
    int arr[100];

    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    for(int i=2; i<n; i++){
        if(arr[i]>arr[i-1]){
            cnt++;
        }
    }
    cout << cnt;
}