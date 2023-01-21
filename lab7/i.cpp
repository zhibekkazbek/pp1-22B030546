/*Infinite
You are given a sequence of numbers. It is a too long sequence. 
It will stop when user enters 0. Print sum of entered numbers.*/

#include <iostream>
using namespace std;

long long Infinite(long long sum){
    int n;
    cin >> n;
    sum += n;
    if(n == 0){
        return sum;
    }
    return Infinite(sum);
}

int main(){
    
    cout << Infinite(0);
}