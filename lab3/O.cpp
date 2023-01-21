//Sort

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x;
	cin >> x;
	int arr[x];
	
	for (int i = 0; i < x; i++)
	cin >> arr[i];
	
	sort (arr, arr + x);
	
	for (int i = x - 1; i >= 0; i--)
	cout << arr[i] << ' ';
	return 0;
}