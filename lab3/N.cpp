//Square

#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int x;
	cin >> x;
	int arr[x];
	
	for (int i = 0; i < x; i++){
	cin >> arr[i];
	cout << arr[i] * arr[i] << ' ';}
	return 0;
}