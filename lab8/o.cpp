/*Sort letters
In first line output single integer — the number of unique letters from given stringSecond line 
contains lower case each letter in the alphabet separated by space*/

#include <iostream>
#include <set>
using namespace std;


int main(){
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.size(); i++){
        st.insert(tolower(s[i]));
    }
    cout << st.size() << endl;
    set<char> :: iterator it = st.begin();
    for(it; it != st.end(); it++){
        cout << *it << " ";
    }
}