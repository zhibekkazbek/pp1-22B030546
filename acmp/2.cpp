//Сумма
//Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно.

#include <iostream>
using namespace std;
main(){
    int n,i,sum=0;
    cin >>n;
    if (n>0 && n!=0){
        for (i=1;i<=n;i++)
        sum+=i;
    }
    else{
        for (i=1;i>=n;i--)
        sum+=i;
    }
    cout <<sum;
}