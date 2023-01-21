/* B-74862. Difference between two arrays
You have two arrays 
a and b. You must write a function which will create a new array d which elements will di = |ai - bi∣ */

#include <iostream>
#include <cmath> 
using namespace std;

int differ(int a, int b){
    return abs(b - a);
}

int main(){
    int n; cin >> n;
    int a[n], b[n];

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) cout << differ(a[i], b[i]) << " ";
}