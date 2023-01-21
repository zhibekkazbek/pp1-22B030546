//Is it square? !!!

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(ceil(sqrt(n))==floor(sqrt(n))){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}