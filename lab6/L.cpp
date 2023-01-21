/* !!! L-Допустимая строка - 2
Вам дана строка s. Напишите функцию, которая проверит строку на допустимость.
Допустимой считается такая строка, которая содержит в себе n подряд идущих цифр.*/

#include <iostream>
using namespace std;

bool Validate(string s, int a){
    int cnt = 0; 
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' and s[i] <= '9') cnt++;
        else cnt = 0;
        if(cnt == a) return true;
    }
    return false;
}

int main(){
    string s; cin >> s;
    int n; cin >> n;
    cout << (Validate(s, n) ? "Valid" : "Not valid");
}