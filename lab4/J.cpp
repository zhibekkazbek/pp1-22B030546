/* J-74478. Odd or even?
Given a two-dimensional array of size n x m (n rows, m columns). 
Add 1 to those shells where i + j is even, and subtract 1, if i + j is odd. Array indexing starts from 0 (0 is even).
*/

#include <iostream>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if((i+j) % 2 == 0) arr[i][j] += 1;
            else arr[i][j] -= 1;
        }
    }
    
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}