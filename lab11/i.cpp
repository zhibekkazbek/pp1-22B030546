/*I-ZA WARUDO TOKI WO TOMARE
DIO is fighting with JOJO. DIO wants to cast time stop, but for this DIO needs to find at least one 
palindrome in given string s by permutations of letters, help DIO, is he can cast ZA WARUDO TOKI WO TOMARE.*/

#include <iostream> 
#include <algorithm>

using namespace std;

bool Palindrome(string s){
    string t = s;
    reverse(s.begin(), s.end());
    return t == s;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        if(Palindrome(s)){
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    return 0;
}