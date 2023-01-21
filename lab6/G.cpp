/* !!! G-Убрать гласные
Вам дана строка s. Напишите фукнцию, которая уберет все гласные буквы из строки.*/

#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s, '\n');
    for(int i=0; i<s.size(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='u' || s[i]=='o' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='U' || s[i]=='O') i +=0;
        else cout << s[i];
    }
    return 0;
}