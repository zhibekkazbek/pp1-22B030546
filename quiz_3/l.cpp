#include <iostream> 
#include<cmath>
using namespace std; 

int main() { 
    string s;
    getline (cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if (s[i]=='z'){
                cout<< "a";
            }
            else if (s[i]=='Z'){
                cout<<"A";
            }
            else cout << char(int(s[i]) + 1);
        }
        else{
            cout << s[i];
        }
    }

    
    return 0;
}