/*F-Допустимая строка
Дана строка s. Вам нужно написать функцию, которая проверит строку на допустимость. 
Допустимой считается такая строка, которая содержит n или больше цифр.*/

#include <iostream>
using namespace std;

int main(){
    string s;
    int n, cnt = 0;
    cin >> s >> n;
    for(int i=0; i<s.size(); i++){
        if(s[i] > 47 && s[i] < 58) cnt++;
    }
    if(n > cnt) cout << "NO";
    else cout << "YES";
    return 0;
}