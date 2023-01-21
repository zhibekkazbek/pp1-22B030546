// J-73389. Products.

#include <iostream>
using namespace std;
int main(){
  int a, b, c, cnta, cntb, cntc, sum;
  cin >> a >> b >> c >> cnta >> cntb >> cntc >> sum;
  if(a*cnta + b*cntb + c*cntc <= sum)cout << "Yes";
  else cout << "No";
  return 0;
}