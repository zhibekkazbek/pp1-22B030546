#include <iostream>
using namespace std;
int main(){
    int n, m, min = 1000000002, posy = 0, posx = 0, sum = 0;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for(int i = 0; i < m; i++){
        min = 1000000002;
        for(int j = 0; j < n; j++){
            if(arr[j][i] < min){
                posx = i;
                posy = j;
                min = arr[j][i];
            }
        }
        sum += min;
        cout << posy + 1  << ";" << posx + 1 << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl << sum;
    return 0;
}
