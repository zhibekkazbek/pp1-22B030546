/*N-74502. Primes. !!!
A prime number (or a prime) is a natural number greater than 1 that cannot be formed by multiplying two 
smaller natural numbers.Find all prime numbers from 2 to n using a nested for loop.*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 0 or n == 1){
        return false;
    }
    else{
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n; cin >> n;

    for(int i = 2; i <= n; i++){
        if(isPrime(i)) cout << i << " is prime" << endl;
    }
}