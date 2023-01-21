/*L-74500. Minimum numbers. !!!
Find the sum of the smallest elements of each column of the matrix and their coordinates. 
If there same min elements in column program takes coordinates of the first one
Coordinates of each smallest element in each column and their sum.*/

#include <iostream>
using namespace std;
int main(){
    int n, m, min=9999999999999999, sum=0; cin >> n >> m;
    int arr[n][m], ans[m];
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "coordinates of min elements:" << endl;

    for(int i = 0; i < m; i ++){
        min=9999999999999999;
        for(int j = 0; j < n; j++){
            if(arr[j][i]<min) min = arr[j][i];
        }
        sum += arr[j][i];
        ans[i] = min;
    }

    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j++){
            if(arr[j][i] == ans[i]){
                cout << j + 1 << ";" << i + 1 << endl;
                break;
            }
        }
    }
    cout << "Their sum:\n" << sum;
}