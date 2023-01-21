/*P-74450. Positive number
Alisa hates negative numbers. Write the function which converts the number to positive*/ 

#include <iostream>
#include <algorithm>
using namespace std;

int Positive(int a){
    return abs(a);
}

int main(){
    int n; cin >> n;
    cout << Positive(n);
}