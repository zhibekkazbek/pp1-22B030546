/*H-74439. To drop or not to drop?
Help Aisultan choose which discipline to drop, so he will have a good GPA. Each row represents one subject with its grades. Pick one subject with the minimal total grades. 
If two or more subjects’ grades are equal, pick the first one.*/

#include <iostream>
using namespace std;
int main(){
    int n, m, sum=0, minSum=99999999, pos=0; cin >> n >> m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        if(sum < minSum){
            minSum = sum;
            pos = i;
        }
        sum = 0;
    }
    cout << pos + 1;
}