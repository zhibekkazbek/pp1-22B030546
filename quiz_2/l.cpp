/*Don't get a penalty!
There’re lots of Sergek cameras in our city, and many drivers usually don’t like it because of a high penalty. 
So let’s help drivers to know will they get a penalty for increasing speed or not. You’re given m x n matrix arr, 
arr[i][j] is speed on current interval. You’re also given the limit number, so if at least one of the checked 
speed is greater than a limit, the driver will get a penalty and you should print Penalty!, else print No penalty 
for today.*/

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

    int x; cin >> x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(x < arr[i][j]){
                cout << "Penalty!";
                return 0;
            }
        }
    }
    cout << "No penalty for today.";
}