/* Order.
Daniil and Vanya decided to play a game.N cards were put in a row on the table. 
Daniil takes all cards with even number on it, and transfers them to  the left edge of the row, 
without changing their order of sequence. And Vanya takes cards with odd numbers, 
and transfers them to the right without changing their sequence. Help automate this process, write your program!*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] % 2 != 0){
            cout << a[i] << " ";
        }
    }
}