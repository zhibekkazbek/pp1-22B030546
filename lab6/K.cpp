/*K-Найти сумму цифр
Вам дано число n. Напишите фукнцию нахождения суммы всех его цифр.*/

#include <iostream>
using namespace std;

int sum(string s){
    int digits = 0;
    for(int i=0; i<s.size(); i++) digits += s[i] -'0';
    return digits;
}
int main(){
    string s; cin >> s;
    cout << sum(s);
}