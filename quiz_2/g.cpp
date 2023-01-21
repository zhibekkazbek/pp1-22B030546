/*Loop-square.
Asman decided to give a simple task to his students. All that is needed is to print 
the numbers from n to m which have integer square root.*/

#include <iostream> 
#include <cmath>    
using namespace std;
int main(){
    int n, m, k;
    cin >> n >> m >> k;

    if(k==1){
        for(int i=n; i<=m; i++){
            int n = sqrt(i);
            if(n*n == i){
                cout << i << " ";
            }
        }
    }
    else{
        for(int i=m; i>=n; i--){
            int n = sqrt(i);
            if(n*n == i){
                cout << i << " ";
            }
        }
    }
}