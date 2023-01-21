/*R-74447. ToUpper
You are given one letter of English alphabet, write a function which will convert only lowercase letters to 
uppercase.*/

#include <iostream>
using namespace std;

char Upper(char a){
    if(a >= 'a' && a <= 'z') return a - 32;
    else return a;
}
int main(){
    char a; cin >> a;
    cout << Upper(a);
}