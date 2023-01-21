// C-106344. Hoodies !!!

#include <iostream>
using namespace std;
int main(){
    // x - medium size, y - small size,  a - students demand a medium size, 
    // b - students demand a small size hoodie
  int x, y, a, b; cin >> x >> y >> a >> b;
  if(x < a){
    cout << "No";
    return 0;
  }
  if(x-a+y >= b && x >= a)cout << "Yes";
  else cout << "No";
  return 0;
}