//Odd or Even
// Given an integer, n, perform the following conditional actions:
// If n is odd, print "Odd"
// If n is even, print "Even"
// If n is 0, print "None"

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << "None";
    }
    else if(n % 2 == 0){
        cout << "Even";
    }
    else if(n % 2 != 0){
        cout << "Odd";
    }

}