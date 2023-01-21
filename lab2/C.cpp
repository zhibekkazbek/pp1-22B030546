// Leap year
//It is required to determine whether a given year is a leap. A year is a leap if the number is divided by 4,
//but not by 100, and also if it is divided by 400.
//Input a single number - the number of the year. 1 ≤ year ≤ 30000
//Output "YES"or "NO"

#include <iostream>
using namespace std;
int main(){
    int y;
    cin >> y;
    if(y%4==0 || y%100==0){
        cout << "YES";
    }
    else if(y%400==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}