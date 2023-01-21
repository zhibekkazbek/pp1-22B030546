/*Queue
Aidar in queue order puts zeros and ones in a row. He hates ones, and if two ones are located beside then he removes them. 
You have the order in which Aidar is going to put numbers.Your task is to find the final row*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    stack<int> st;
    for(int i = 0; i < s.size(); i++){
        if(st.empty() || s[i] == '0'){
            int a = s[i] - '0';
            st.push(a);
        }
        else if(st.top() == 1 && s[i] == '1'){
            st.pop();
        }
        else{
            int a = s[i] - '0';
            st.push(a);
        }
    }
    vector<int> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
}