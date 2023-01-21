#include <iostream>

using namespace std;

string maxWord(string s){
    string t, ans;
    int max = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            t += s[i];
        }
        else{
            if(t.size() > max){
                max = t.size();
                ans = t;
            }
            t = "";
        }
    }
    return ans;
}

int main(){
    string s; 
    getline(cin,s);
    s += " ";
    cout << maxWord(s);
}