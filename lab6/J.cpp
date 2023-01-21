/*J-Найти максимум
Напишите функцию нахождения максимума из 4 чисел.*/

#include <iostream>
using namespace std;

int maxi(int a, int b, int c, int d){
    int max = -100001, arr[]={a,b,c,d};
    for(int i=0; i<4; i++){
        if(max < arr[i]) max = arr[i];
    }
    return max;
}
int main(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    cout << maxi(a, b, c, d);
}