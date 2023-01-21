// R-186807. Find Good Pair !!!
//In the first example the product of digits = 1 * 2 * 3 = 6, sum of digits = 1 + 2 + 3 = 6. So the answer is 6 + 6 = 12.

#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  int l = s.length(), sum = 0, prod = 1;
  for(int i = 0; i < l; i++){
    sum += s[i] - 48;
    prod *= (s[i] - 48);
  }
  cout << sum + prod;
  return 0;
}