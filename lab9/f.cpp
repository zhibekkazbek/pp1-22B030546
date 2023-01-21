/*Bracket sequence
You are given a bracket sequence. Your task is to identify whether this bracket sequence is correct or not. 
Note that a bracket sequence is correct if it is possible to get a correct mathematical expression by 
adding “+”-s and “1”-s to it. For example, sequences “(())()”, “()” and “(()(()))” are correct, 
while “)(”, “(()” and “(()))(” are not.*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(st.empty() && s[i] == ')'){
            cout << "NO";
            return 0;
        }
        else if(s[i] == ')' && st.top() == '('){
            st.pop();
        }
    }
    if(st.empty()){
        cout << "YES";
    }
    else cout << "NO";
}