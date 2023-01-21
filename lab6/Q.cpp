/*Q-74867. !!! Percent of girls
Director of school number 3 wants to congratulate all girls. That’s why he need know what percentage 
of all pupils are girls? Let’s help him. Write a function which will find the percentage of girls in school.*/

#include <iostream>
using namespace std;

void Per(int a, int b){
    cout << (float) b / a * 100;
}

int main(){
    int n, m; cin >> n >> m;
    Per(n, m);
}