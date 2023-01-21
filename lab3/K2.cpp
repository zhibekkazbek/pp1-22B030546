#include <iostream> 
using namespace std;

void removeDuplicates(int arr[], int n) 
{ 
 for (int i = 0; i<n; i++)
 {
    for(int j=i+1; j<n; j++)
    {
        if(arr[i] == arr[j])
        {
            int k = j;
            while(k<n)

                {
                arr[k]=arr[k+1];
                k++;
                }
            --n;
        }
        else
            continue;
        for (int i = 0; i<n; i++)
        cout<<" "<<arr[i]<<" ";
        cout<<endl;
    }