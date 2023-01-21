// Q-186632. Is there any chance?

#include <iostream>
using namespace std;
int main(){
    int mid, end, final; cin >> mid >> end >> final;
    if(mid+end >= 30 && final > 20 && mid+end+final >=70) cout << "YES!";
    else cout << "NO.";
    return 0;
}