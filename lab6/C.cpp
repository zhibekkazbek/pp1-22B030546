/* !!! *C-74865. How many elements are same?
Given two array a and b. Write a function which will find count of equals in two arrays.*/

#include <iostream>
using namespace std;

int main(){
    int a[101] = {0}, b[101] = {0};

    int n, x, count = 0; 
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        a[x]++;
    }

    for(int i=0; i<n; i++){
        cin >> x;
        b[x]++;
    }

    for(int i=1; i<101; i++) count += min(a[i], b[i]);

    cout << count;
    return 0;
}