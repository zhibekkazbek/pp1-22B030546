/*Q-74505. Christmas tree. !!!
Help Arman to print image of christmas tree in the screen. Image of tree with stars.*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n * 2 - 1][n], k = n + 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n * 2 - 1; j++){
            if(i + j >= n - 1 and i + j < k - 1) cout << "*";
            else cout << ".";
        }
        k += 2;
        cout << endl;
    }
}