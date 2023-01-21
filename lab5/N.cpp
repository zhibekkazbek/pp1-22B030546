/*N-74863.Greeting
You’re given name of the user, you need to write program that will greet user by the name. 
Greeting need to be in this pattern “Welcome ” + name.*/

#include <iostream>
using namespace std;

int main(){
    string name; cin >> name;
    cout << "Welcome " << name;
}