#include <iostream>
using namespace std;
int main(){
    int n, t, temp, k = 0;
    cin >> n; // набор из n чисе
    cin >> t; // вводим первое число последовательности
    for(int i = 1; i < n; ++i){
        cin >> temp;
        if(temp > t){
            ++k;
            t = temp; // cохраняем предыдущее
        }
    }
    cout << k;
    return 0;
}