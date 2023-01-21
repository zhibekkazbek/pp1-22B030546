/*Fully symmetric array
Array of numbers is called fully symmetric if its’ first half equals to reversed second part 
(with numbers reversed too). Determine if given array is fully symmetric or not.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    string s[a];
    for(int i=0;i<a;i++)
    {
        cin >> s[i];
    }
    char j[100000000];
    int x=0;
    for(int i=0;i<a;i++)
    {
        for(int y=0;y<s[i].size();y++)
        {
            if(s[i][y] != '0')
            {
                j[x] = s[i][y];
                x++;
            }
        }
    }
    int c=0;
    for(int i=0;i<x/2;i++)
    {
        if(j[i] != j[x-1-c])
        {
            cout <<"NO";
            return 0;
        }
        c++;
    }
    cout <<"YES";
}