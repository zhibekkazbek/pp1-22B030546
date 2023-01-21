#include <iostream> 
#include<cmath>
using namespace std; 

int main() { 
    string s;
    getline (cin, s);
    int sum = 0;

    for (int i = s.length() - 1; i >= 0; i--) 
    {
        if (s[i] == '1') {
            int a = s.length() - 1 - i;
            sum += pow(2, a);
        }
    }
    cout << sum;

    
    return 0;
}