// V-121792. Power of 2.

#include <iostream>
using namespace std;
int main(){
  unsigned long long int n, pow = 1;
  cin >> n;
  for(int i = 0; i <= n; i++){
    cout << pow << endl;
    pow *= 2;
  }
  return 0;
}