/*Number of good students.
As we all know, students often have many deadlines. A student is good if he did the assignment at a given time. 
You are given n - size of two arrays, first array a - start time, second b - end time, and integer t - query time. 
The i-th student started doing his homework at the time a[i] and finished it at time b[i]. 
You need to find the number of students who finished their assignment before the deadline(at time t) 
More formally, print the number of students where t lays in the interval [a[i], b[i]] inclusive.*/

#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int x, cnt=0;
    cin >> x;
    for(int i=0; i<n; i++){
        if(a[i] <= x && x <= b[i]){
            cnt++;
        }
    }

    cout << cnt;
}