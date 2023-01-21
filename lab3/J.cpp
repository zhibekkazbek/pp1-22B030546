//Upper bound -1? !!!
//Given a sorted array and a target value, return the index if the target is found. If not, return the index
//where it would be if it were inserted in order.
//You may assume no duplicates in the array.
//Input: The first line contains two integers n, m (1 <= n <= 10^5, 1 <= m <= 10^9) — array size and target value. The
//next line contains n integers ai (1 <= ai <= 10^9) — elements of array.


#include <iostream>
using namespace std;
int main(){
    int n, target, pos=0;
    cin >> n >> target;
    int arr[n];
    bool st = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == target){
            pos = i+1;
            st = 1;
        }
        else if(target < arr[i] && target > arr[i-1]){
            pos = i;
        }
    }
    if(target > arr[n-1])pos=n;
    else if(target < arr[0])pos=1;
    cout << pos;
    return 0;
}