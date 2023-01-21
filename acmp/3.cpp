//Пятью пять - двадцать пять!

#include <iostream>
using namespace std;
int main(){
    int n, a;
    cin >> a;
    if(n>=15){
        n=n/10;
        a=(n+1)*n;
        cout << a << "25";
    }
    else{
        a=a*a;
        cout << a;
    }
}