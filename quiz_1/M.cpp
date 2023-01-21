// M-188062. Boris and homework !!!

#include <iostream> 
using namespace std;
int main(){
    int n, a1, d, sum=0;
    cin >> n >> a1 >> d;
    for(int i = 1; i <= n; i++){
        cout << a1 << " ";
        sum += a1;
        a1 += d;
    }
    cout << endl << "sum: " << sum;
    return 0;
}