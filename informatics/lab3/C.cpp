/*Дан массив, состоящий из целых чисел. Напишите программу, 
которая подсчитывает количество положительных чисел среди элементов массива.*/

#include <iostream>
using namespace std;
int main(){
    int n, cnt=0; cin >> n;
    long long arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>0){
            cnt++;
        }
    }
    cout << cnt;
}