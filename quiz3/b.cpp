#include <iostream>
using namespace std;

bool isTruth(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')return 0;
    }
    return 1;
}

int main(){

    int pos = 0, n = 0;
    string s, t = "";
    getline(cin, s);
    s.push_back(' ');

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ')n++;
    }
    string arr[n];

    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ')t.push_back(s[i]);
        else {
        arr[pos] = t;
        pos++;
        t = "";
        }
    }

    for(int i = 0; i < n; i++){
        if(isTruth(arr[i]) == 1)cout << arr[i] << endl;
    }
    return 0;
}