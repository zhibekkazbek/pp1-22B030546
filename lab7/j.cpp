/*Heater Almat
Almat does not love digits. Therefore, he always divides digits to two and takes one part for himself. 
For example, yesterday he noticed a number 865 in the street. At first, he took the half of first digit (8/2 = 4), 
then second digit’s part (6/2 = 3), then third digit’s part(5/2 = 2).

8/2+6/2+5/2 = 9 */

#include <iostream>
using namespace std;

int Sum(string s, int sum, int i){
    if(i == s.size()){
        return sum;
    }
    sum += (s[i] - 48) / 2;
    return Sum(s, sum, i+1);
}

int main(){
    string s; cin >> s;
    int sum = 0;
    int i = 0;
    cout << Sum(s, sum, i);
}