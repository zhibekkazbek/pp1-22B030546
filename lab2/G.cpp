//Maxi
//Given n integers. In this task, you should find the maximum from these numbers.
//Input
//In first line, given n. 1 ≤ n ≤ 1000. In the second line, given n integer numbers.
//Output
//Output the maximum.

#include <iostream>
using namespace std;
int main(){
    int n, a, max=0;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> a;
        if(max < a){
            max = a;
    }
    }
    cout << max;
}