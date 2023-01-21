// H-187563. Chebureks.

#include <iostream>
using namespace std;
int main(){
  int n, m, b;
  cin >> n >> m >> b;
  n = n + m;
  if(b >= n*0.1)cout << "Boris, you are punished!";
  else cout << "You are my sweet baby";
  return 0;
}