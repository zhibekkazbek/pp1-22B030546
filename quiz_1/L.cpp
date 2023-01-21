// L-188623. Not a cheep one !!!

#include <iostream>
using namespace std;
int main(){
  float n, save = 0;
  cin >> n;
  for(int i = 1; save < 500000; i++){
    save += n*0.3;
    n *= 1.1;
    if(save >= 500000){
      cout << i;
      return 0;
    }
  }
  return 0;
}