#include <iostream>
using namespace std;

int main(){

    int n, max = -1000000001; 
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            cout << i + 1;
            break;
        }
    }
}

// 4
// -10 -2 -5 -8

// max = -2

// Iteration 1:
//     i = 0
//     max = -2, arr[i] = -10

// Iteration 2:
//     i = 1
//     max = -2 == arr[i] = -2 -> cout << 2; -> break;