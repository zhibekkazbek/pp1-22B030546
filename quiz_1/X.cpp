// X-140255. Two out of three.

#include <iostream>
using namespace std;
int main(){
  int a, b, c; cin >> a >> b >> c;
  if((a == b || a == c || b == c)){
    if(a == b && b == c)cout << "NO";
    else cout << "YES";
  }else cout << "NO";
  return 0;
}