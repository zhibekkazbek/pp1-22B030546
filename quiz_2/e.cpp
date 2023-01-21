/*Beautiful number.
A number is called beautiful if its’ first digit equals to sum of all other digits modulo 10. 
Determine if given number is beautiful or not.*/

#include <iostream> 
using namespace std; 

int main(){
    long long int n;
    cin >> n;
    long long int a, sum = 0;

    while(n>0){
        a = n % 10;
        n = n / 10;
        sum += a;
    }
    sum = sum - a;
    int b = sum % 10;
    if(a==b) cout << "YES";
    else cout << "NO";
}