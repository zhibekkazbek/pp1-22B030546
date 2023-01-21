//Is it Prime?

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x;
	cin >> x;
	
	for (int i = 2; i < x; i++){
		if (x % i == 0){
			cout << "No";
			return 0;
		}
	}cout << "Yes";
	return 0;
}