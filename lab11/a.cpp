/*A-Can't Wait for Holiday
Given is a string S representing the day of the week today.
S is SUN, MON, TUE, WED, THU, FRI, or SAT, for Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday, 
respectively. After how many days is the next Sunday (tomorrow or later)?*/

#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    if(s == "SAT"){
        cout << 1;
    }
    if(s == "SUN"){
        cout << 7;
    }
    if(s == "MON"){
        cout << 6;
    }
    if(s == "TUE"){
        cout << 5;
    }
    if(s == "WED"){
        cout << 4;
    }
    if(s == "THU"){
        cout << 3;
    }
    if(s == "FRI"){
        cout << 2;
    }
}