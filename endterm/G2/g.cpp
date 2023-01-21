/*Содержит ли слово количество букв, равное степени двойки*/

#include <iostream>
#include <vector>
using namespace std;

bool check(int size, int sum){
    if(sum > size){
        return false;
    }
    if(sum == size){
        return true;
    }
    sum *= 2;
    return check(size, sum);
}

int main(){
    int n;
    cin >> n;
    string s;
    vector<string> v[n];
    for(int i = 0; i < n; i++){
        getline(cin >> ws, s);
        string t;
        s += " ";
        for(int j = 0; j < s.size(); j++){
            if(s[j] >= 'A' && s[j] <= 'Z'){
                t += s[j];
            }
            else if(s[j] >= 'a' && s[j] <= 'z'){
                t += s[j];
            }
            else if(s[j] >= '0' && s[j] <= '9'){
               continue;
            }
            else{
                if(t != ""){
                    if(check(t.size(), 1) == true){
                        v[i].push_back("H");
                    }
                    else{
                        v[i].push_back("C");
                    }
                    V[i].push_back(t);
                }
                t = "";
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}