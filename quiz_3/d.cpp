#include <iostream> 
using namespace std; 

string decToHex(int a) {
    string fake_hex = "";
    int remainder;

    while(a > 0){
        remainder = a%16;
        if(remainder>=0 && remainder<=9){
            fake_hex += char(48+remainder);
        }
        else if (remainder>=10 && remainder<=15){
            fake_hex += char(55+remainder);
        }
        a /= 16;
    }

    string hex = "";

    for(int i=fake_hex.length()-1; i>=0; i--){
        hex += fake_hex[i];
    }
    return hex;
}
 
int main() { 
    int n;
    cin >> n;
    cout << decToHex(n);
    return 0;
}