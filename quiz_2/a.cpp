/* Powerful hero.
Daniil decided to make an “AAA” level game. One of the ideas is that hero can use both arms. 
Each hand has two parameters, the sum and the number of killed. Each enemy has an even or odd number. 
The left hand stores the sum of the even, and the count of the even. The right hand stores the sum of the odd, 
and the count of the odd. When the hero uses superpower, energy appears in each of his hands. 
Energy strength is the sum of hand multiplied by counter of the hand. Calculate the strength for each hand.*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n]; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum1=0, sum2=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            sum1 += a[i];
            cnt1 += 1;
        }
        else{
            sum2 += a[i];
            cnt2 += 1;
        }
    }
    cout << "Left hand magic power: " << sum1*cnt1 << endl;
    cout << "Right hand magic power: " << sum2*cnt2 << endl;
}