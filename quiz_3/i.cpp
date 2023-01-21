#include <iostream> 
using namespace std; 

int main() { 
    string s, d;
    getline (cin, s);
    getline (cin, d);
    char a;
    cin >> a;

    for (int i=0; i < s.length(); i++) {
        for (int j=0; j < d.length(); j++){
            if (s[i]==d[j]){
                s[i] = a;
            }
        }
        cout << s[i];
    }
    return 0;
}