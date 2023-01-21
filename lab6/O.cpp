/*O-74861. Lucky ticket
Do you use public transportation? Probably, you paid for the fare and received ticket with number. 
Lucky ticket is ticket with number, where sum of all numeral is divided by last numeral. 
For example, 754 is lucky, because the remainder of dividing 7+5+4 by 4 is 0. 
Write the function which check the number for luck.*/

#include <iostream>
using namespace std;

bool Lucky(string s){
    int sum = 0;
    for(int i=0; i<s.size(); i++) sum += s[i] -'0';
    if(sum % (s[s.size() - 1] - '0') == 0) return true;
    else return false;
}

int main(){
    string s; cin >> s;
    cout << (Lucky(s) ? "Yes" : "No");
}