/*I-Четные прописные
Дана строка s. Вам нужно написать функцию, которая превратит строчные буквы, 
стоящие на четных позициях в строке, в прописные.*/

#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    for(int i=0; i < s.size(); i+=2){
        if(s[i]>96 && s[i]<123) s[i] -= 32;
    }
    cout << s;
    return 0;
}