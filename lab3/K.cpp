//Duplicates !!!
//Given a sorted array, write a program which will delete all duplicates of elements and just save one of them.

#include <iostream>
using namespace std;
int main(){
    int n, nn;
    cin >> n;
    nn = n;
    int arr[n];
    for (int i=0; i<nn; i++){
        cin >> arr[i];
        if(i>0 && arr[i] == arr[i-1]){
            i--;
            nn--;
        }
    }
    for (int i=0; i<nn; i++){
        cout << arr[i] << " ";
    }
    return 0;
}