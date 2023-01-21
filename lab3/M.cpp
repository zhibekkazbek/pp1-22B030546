//Infinite? !!!
//You are given an array, find the sum of all elements. But you don’t know size of the array.
//Output:Sum of all elements.

#include <iostream>
using namespace std;

int main(){

    long long sum = 0;
    int x;
    while(cin >> x){
        sum += x;
    }
    cout << sum;
}