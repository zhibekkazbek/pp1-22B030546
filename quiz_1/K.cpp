// K-188624. Number of stops !!!
 
#include <iostream>
using namespace std;
int main(){
    int n; // n - passengers
    cin >> n;
    for(int i = 0; n >= 0; i++){ // i - stops
        if(i % 7 != 0){
            if(i % 2 == 0)n -= 4;
            else n += 3;
        }
        if( n <= 0){
            cout << i+1;
            return 0;
        }
    }
    return 0;
}