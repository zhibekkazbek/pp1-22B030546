/*E-73921.sum
You’re given integer N, you need to answer, is the sum of digits in odd positions is equal to sum of digits 
in even positions.*/

#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;
    int odd = 0, even = 0;
    for(int i=0; i < s.size(); i++){
        if(i % 2 == 0) even += s[i] - 48;
        else odd += s[i] - 48;
    }
   if (odd == even) cout << "YES";
   else cout << "NO";
}