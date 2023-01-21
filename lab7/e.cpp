/*Unique divider
Check the given number is 2-th degree.*/

#include <iostream>
using namespace std;

string Degree(int n){
    if(n==1){
        return "Yes";
    }
    else if(n % 2 != 0){
        return "No";
    }
    return Degree(n / 2);
}

int main(){
    int n; cin >> n;
    cout << Degree(n);
}