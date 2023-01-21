/*в первой строке даны два числа, местоположение Ернара(на карте обозначен как Н). в следующей строке даны два 
числа - координаты вора(Т). и в третьей строке вам дана строка, которая содержит в себе 4 вида команд : U, D, R, L. */

#include <iostream>
using namespace std;
int main(){
    int x1, y1;
    cin >> x1 >> y1;
    int x2, y2;
    cin >> x2 >> y2;
    string s;
    cin >> s;
    if(x2 >= 10 || x2 < 0 || y2 >= 10 || y2 < 0){
        cout << "The thief is too far away!" << endl;
        return 0;
    }
    char arr[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            arr[i][j] = '_';
        }
    }
    arr[x1][y1] = 'H';
    arr[x2][y2] = 'T';
    bool ok = false;
    for(int i = 0; i <s.size(); i++){
        arr[x1][y1] = '*'; 
        if(x1 == x2 && y1 == y2){
            arr[x1][y1] = '$';
            ok = true;
            break;
        }
        if(s[i] == 'R'){
            y1 += 1;
            arr[x1][y1] = 'H';
        }
        if(s[i] == 'L'){
            y1 -= 1;
            arr[x1][y1] = 'H';
        }
        if(s[i] == 'D'){
            x1 += 1;
            arr[x1][y1] = 'H';
        }
        if(s[i] == 'U'){
            x1 -= 1;
            arr[x1][y1] = 'H'
        }
        if(x1 < 0 || y1 < 0 || x1 >= 10 || y1 >= 10){
            cout << "The thief is too far away!" << endl;
            return 0;
        }
        if(x1 == x2 && y1 == y2){
            arr[x1][y1] = '$';
            ok = true;
            break;
        }
    }
    if(ok == true){
        cout << "The thief is caught!" << endl;
    }
    else{
        cout << "The hero gave up" << endl;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}