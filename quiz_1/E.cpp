// E-104752. Perfect square !!!

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    float sq = sqrt(n);
    if(sq != sqrt(n))cout << "Simple";
    else cout << "Perfecto";
    return 0;
}