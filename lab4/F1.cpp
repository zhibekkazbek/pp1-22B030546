#include <iostream>
using namespace std;

int main(){
    int n, mx=-1000000001; cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > mx) mx = arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == mx){
                cout << i+1 << " " << j+1;
                return 0;
            }    
        }
    }
}