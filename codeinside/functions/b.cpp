#include <iostream> 

using namespace std;

void project(int n, int m){
    int arr[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1)){
                cout << "+";
            }
            else if(i==0 || i==n-1){
                cout << "-";
            }
            else if(j==0 || j==m-1){
                cout << "|";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    project(n, m);
}