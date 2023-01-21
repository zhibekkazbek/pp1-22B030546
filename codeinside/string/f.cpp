//F-n-ое слово
//В первой строке дана целая строка. Во второй строке дано число n - номер слова, которое надо вывести.

#include <iostream>
using namespace std;
int main(){
    int pos=0;
    string s;
    getline(cin, s);
    int ans; cin >> ans;
    string t;
    s +=  " ";
    
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' '){
            t+=s[i];
            pos+=1;
            if(ans = pos){
                cout << t << endl;
            }
            t = "";
        }
    }
}