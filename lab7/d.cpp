/*Sum of digits
You are given number n. It is not enough to use long long type.*/

#include <iostream>
using namespace std;

int Sum(string s, int sum, int i){
    if(i == s.size()){
        return sum;
    }
    sum += s[i] - 48;
    return Sum(s, sum, i+1);
}

int main(){
    string s; cin >> s;
    int sum = 0;
    int i = 0;
    cout << Sum(s, sum, i);
}