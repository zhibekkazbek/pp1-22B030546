/*H-Допустимое число
Вам дается число n. Нужно написать функцию, которая определит, допустимое ли это число. 
Допустимым считается такое число, которое состоит только из четных цифр.*/

#include <iostream>
using namespace std;

bool Valid(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] % 2 == 1) return false;
    }
    return true;
}
int main(){
    string s; cin >> s;
    cout << (Valid(s) ? "Valid" : "Not valid");
}