/*Boris's grades
In the first line you are given integer N - number of subjects, M - number of grades for each subject.
Print the average grade for each subject on one line.*/

#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int sum = 0, x;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        x = sum / m;
        cout << x << " ";
    }
}