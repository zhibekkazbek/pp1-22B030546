#include <iostream>
#include <map>
#include <vector>

using namespace std;


int main(){
    int n; cin >> n;
    map<string, string> mp;
    vector<string> vec;

    for(int i=0;i<n;i++){
        string l, p;
        cin >> l >> p;
        mp[l]=p;
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        string l,p;
        cin >> l >> p;

        if(mp[l]==""){
            vec.push_back( "login error");
        }
        else if(mp[l] != p){
            vec.push_back("password error");

        }
        else{
            vec.push_back("correct password");
        }
    }

    for(int i=0;i<vec.size();i++){
        cout << vec[i] << endl;
    }
}