/*K-74852.Vowel letters
You’re given string s consisting of small letters, output amount of vowel letters. 
In english vowel letters are a, e, i, o, and u. (letter ’y’ is sometimes vowel, 
but in this problem we don’t take it for the answer)*/

#include <iostream>
using namespace std;

int main(){
    string s, sub = "aeiuo"; cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < sub.size(); j++){
            if(s[i]==sub[j]){
                cnt++;
            }
        }
    }
    cout << cnt;
}