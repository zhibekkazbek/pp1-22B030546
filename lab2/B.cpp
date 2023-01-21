//Super numbers
//If n is odd, print "Super"
//If n is even and in the inclusive range of 2 to 5, print "Not Super"
//If n is even and in the inclusive range of 6 to 20, print "Super"
//if n is even and greater than 20, print "Not Super"

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%2!=0){
        cout << "Super";  
        }
    else if(n%2==0 && n<=5 && n>=2){
        cout << "Not Super";
        }
    else if(n%2==0 && n<=20 && n>=6){
        cout << "Super";
    }
    else if(n%2==0 && n>20){
        cout << "Not Super";
    } 
}