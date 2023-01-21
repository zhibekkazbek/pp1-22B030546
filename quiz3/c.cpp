#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main()
{
    int n, max=0, truth;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==i){
                break;
            }
            truth = gcd(arr[i],arr[j]);
            if(truth>max){
                max=truth;
            }
        }
        
    }
    cout<<max;

    return 0;
}