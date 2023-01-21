/*D-74449. Books
Each book in the library has own ID number. Alikhan wants to buy a book which has an ID number x. 
He wants to know has the library got this book? Let’s help him. Write function!
In first line given single integer n, (1≤n≤10000) — number of books in the library.
In second line given ID numbers of books a, (1≤ai≤1000000) .
In third line given elements of x, (1≤x≤1000000).*/

#include <iostream>
using namespace std;

int main(){
    int n, a;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cin >> a;
    for(int i=0; i<n; i++){
        if(arr[i]==a){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}