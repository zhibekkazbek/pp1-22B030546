/*O-74503. Main diagonal.
The main diagonal of a matrix consists of those elements that lie on the diagonal that runs from top left to bottom right.
Return the maximum value of the element on this diagonal and its coordinates. 
If there same maximum elements it takes coordinates of the first one.*/

#include <iostream>
using namespace std;
int main(){
    int n, max = -100001; cin >> n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
            if(i==j && arr[i][j]>max) max = arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && max == arr[i][j]){
                cout << "Maximum element is:" << " " << max << " " << "with coordinates:" << " " << i+1 << ";" << j+1;
                return 0;
            }
        }
    }
}

