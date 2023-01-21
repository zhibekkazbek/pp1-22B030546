/*Where are students from?
Every year, at summer time, selection commitee takes documents of students, who are from different place of KZ. 
Now, they want to know percentage of students from each place. Help them to calculate it.*/

#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, double> mp;
    int all = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        for(int j = 0; j < a; j++){
            string s;
            int x;
            cin >> s >> x;
            mp[s] += x;
            all += x;
        }
    }
    map<string, double> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        double per = (it -> second) / all * 100;
        cout << it -> first << " " << per << endl;
    }
}