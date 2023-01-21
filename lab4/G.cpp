/*G. 74438. Dots or number.
Write program that prints numbers in increasing order in diagonal and "."on other shells.
Print numbers on diagonal*/

#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1) cout << i+1;
            else cout << ".";
        }
        cout << endl;
    }
}