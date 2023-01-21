/*Instead of ... 2
I hope previous problem was easy for you. If previouly sequence was just reversed. 
Right now, sequence is firstly rotated then reversed. Restore initial sequence again.*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverse(arr, arr + n);
    rotate(arr, arr + n - m, arr + n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}