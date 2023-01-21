/*Perfect matrix or not?
Check whether the given matrix is perfect or not and print the result. 
We call the matrix perfect if and only if it is symmetric over the main diagonal. 
The main diagonal is the one that goes from the upper left corner of the two-dimensional array to the lower right.*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][n];
    bool boolka = true;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i==j){
                continue;
            }
            else if(a[i][j] != a[j][i]){
                boolka = false;
            }
        }
    }

    if(boolka){
        cout << "Perfect.";
    }
    else cout << "Not perfect.";
}