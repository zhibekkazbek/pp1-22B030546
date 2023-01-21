/*Possible palindromes
Aibek likes palindromes. He always gets any sequence and try make palindrome. If it is possible to make many palindromes, 
prefers first in “ascending” order(Even when sequence is already palindrome). Help Aibek to create palindrome.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Palindrome(vector<int> v){
    for(int i = 0; i < v.size() / 2; i++){
        if(v[i] != v[v.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    do{
        if(Palindrome(v)){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
    }while(next_permutation(v.begin(), v.end()));
    cout << "Impossible";
}