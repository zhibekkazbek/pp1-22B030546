// T-Vanya and digits !!!

#include <iostream>
using namespace std;
int main(){
  int n, a;
  cin >> n;
  int sum[n];
  for(int i = 0; i < n; i++){
    cin >> a;
    sum[i] = 0;
    for(int j = 0; a >= 1; j++){
      sum[i] += a%10;
      a -= a%10;
      a /= 10;
    }
  }
  for(int i = 0; i < n; i++){
    if(sum[i] % 2 == 0)cout << "Sum of digits is even!" << endl;
    else cout << "Sum of digits is odd!" << endl;
  }
  return 0;
}