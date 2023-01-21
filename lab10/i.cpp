/*Instead of ...
He wrote sequence of numbers on paper and showed it via mirror. As you can mention, Assyl sees reversed sequence. 
Give hints for Assyl in which places were numbers originally.Print hints as in examples. 
If values are equal print OK only for that case.*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    reverse(b, b + n);
    for(int i = 0; i < n; i++){
        if(a[i] == a[n - 1 - i]){
            cout << "OK" << endl;
        }
        else{
            cout << "Instead of " << a[i] << " here was " << b[i] << endl;
        }
    }
}