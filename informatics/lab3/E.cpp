/*Дан массив, состоящий из целых чисел. Напишите программу, которая определяет, 
есть ли в массиве пара соседних элементов с одинаковыми знаками.*/

#include <iostream>
using namespace std;
int main(){
    int n, k=0; cin >> n;
    int a[n];

    for(int i=0; i<n-1; i++){
        cin >> a[i];
        if(a[i]>0 && a[i+1]>0 || a[i]<0 && a[i+1]<0){
            k++;
        }
    }
    if(k>=2) cout << "YES";
    else cout << "NO";
}