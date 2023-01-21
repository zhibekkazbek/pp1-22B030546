/*Remove evens
Create new sequence with unique elements. Then remove even numbers from new sequence.*/

#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    set<int> :: iterator it = s.begin();
    for(it; it != s.end(); it++){
        if(*it % 2 == 1) cout << *it << " ";
    }
}