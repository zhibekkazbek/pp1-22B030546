#include <iostream> 
#include <algorithm>
using namespace std; 
int main() { 
    string s, task;
    getline (cin, s);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char a;
        cin >> a;
        task += a;
    }

    sort(begin(task), end(task));

    for (int i=0; i<task.length(); i++) {
        int counter = 0;
        for (int j=0; j<s.length(); j++) {
            if (s[j]==task[i]){
                counter++;
            }
        }
        cout<<task[i]<<" - "<<counter<<"\n";
    }
}