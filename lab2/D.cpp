//Steaks
//After the personal contest, happy but hungry programmers dropped into the restaurant Kaganat and
//ordered n specialty steaks. Each steak is cooked by frying each of its sides on a frying pan for one minute.
//Unfortunately, the chef has only one frying pan, on which at most k steaks can be cooked simultaneously.
//Find the time the chef needs to cook the steaks.
//Input
//The only input line contains the integers n and k separated with a space 1 <= n, k <= 1000
//Output
//Output the minimal number of minutes in which the chef can cook n steaks.

#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if(n*2 <= k)cout << "2";
    else if(n*2%k != 0) cout << n*2/k + 1;
    else cout << n*2/k;
    return 0;
}