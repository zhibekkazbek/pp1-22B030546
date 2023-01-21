#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n][n*2];
    int i = 0;
    int j = 0;
    int a = n;
    bool ok = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2; j++){
            arr[i][j] = " ";
        }
    }
    while(j < n * 2){
        for(int k = 0; k < a; k++){
            string t;
            t = to_string(a);
            arr[k][j] = t;
        }
        a--;
        j++;
        if(a == 0){
            ok = true;
            break;
        }
    }
    a = 1;
    while(j < n * 2){
        for(int k = 0; k < a; k++){
            string t;
            t = to_string(a);
            arr[k][j] = t;
        }
        a++;
        j++;
        if(a == n + 1){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}