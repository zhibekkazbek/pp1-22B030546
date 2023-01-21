/*Generate power
Most of mathematician say that function f(x) = pow(x,x) has an interesting behavior. 
However, it hard to calculate such function for the value n, that is why you shoud help them to create sequence 
of n power n , where n is indeces of element. Make mathematicians life easier.*/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
  
unsigned long long gen(){
    static int i = -1;
    i++;
    unsigned long long x = 1;
    for(int j = 1; j <= i; j++) x *= i;
    return x;
}
  
int main(){
    int n; cin >> n;  
    vector<unsigned long long> v(n + 1); 
    generate(v.begin(), v.end(), gen);

    for (vector<unsigned long long> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}