#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n, num = 0;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
      cin >> s;
      for(int j = 0; j < s.length(); j++){
        if(s[j] == '0')num++;
      }
    }
    cout << num;
    return 0;
}