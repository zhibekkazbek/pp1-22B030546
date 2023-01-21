/*Squack
Print the reversed number n after required operations. If sequence is empty, just print “Stack is empty”.*/

#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    stack<char> st;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(st.top() == '1' && s[i] == '6'){
            st.pop();
        }
        else if(st.top() == '2' && s[i] == '5'){
            st.pop();
        }
        else if(st.top() == '3' && s[i] == '6'){
            st.pop();
        }
        else if(st.top() == '4' && s[i] == '9'){
            st.pop();
        }
        else if(st.top() == '6' && s[i] == '4'){
            st.pop();
        }
        else if(st.top() == '8' && s[i] == '1'){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.empty()){
        cout << "Stack is empty";
    }
    else{
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
}