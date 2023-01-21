/*unique x set
We know that it is easy to find all unique elements in sorted order via set. But also, there are exist such 
functions as unique that will give iterator without consecutive duplicates as a result. 
In this task you will be given two sequences. Erase all consequent duplicates for both vectors. 
Then merge them to the new vector(Turn by turn,first element will be first of first, second element of the new 
vector will be first of the second). Do the same thing with a new vector(Use unique again).*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        v1.push_back(x);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        v2.push_back(x);
    }
    vector<int> :: iterator it1 = unique(v1.begin(), v1.end());
    vector<int> :: iterator it2 = unique(v2.begin(), v2.end());
    v1.resize(distance(v1.begin(), it1));
    v2.resize(distance(v2.begin(), it2));

    vector<int> v(v1.size() + v2.size());
    for(int i = 0; i < v.size(); i += 2){
        v[i] = v1[i / 2];
    }
    for(int i = 1; i < v.size(); i += 2){
        v[i] = v2[i / 2];
    }
    vector<int> :: iterator it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}