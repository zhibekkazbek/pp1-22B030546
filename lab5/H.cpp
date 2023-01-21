/*H-74819.Digits !!!
You’re given string s, you need to answer, is the amount of every digits in this string is equal.*/

#include <iostream>
using namespace std;
int main(){
    string s; cin >> s;
    int arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < s.size(); i++){
        arr[s[i] - 48] += 1;
    }
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(arr[i] != 0 and arr[j] != 0 and arr[i] != arr[j]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}