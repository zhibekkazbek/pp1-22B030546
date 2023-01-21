// F-105808. Birthday party

#include <iostream>
using namespace std;
int main(){
  int ulx, uly, lrx, lry, bx, by;
  cin >> ulx >> uly >> lrx >> lry >> bx >> by;
    if(bx >= ulx && bx <= lrx){
        if(by <= uly && by >= lry){
            cout << "yes";
        }else cout << "no";
    }else cout << "no";
    return 0;
}