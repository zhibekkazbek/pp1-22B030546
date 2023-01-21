/* Art.
One day Daniil decided to paint art. He had a canvas with a width w and height h. 
Since Daniil is not a humanist, he started with an easy one - to draw rectangle. He measured them by 4 
coordinates x1, y1, x2, y2. (x1, y1) - coordinates of the upper left corner. 
Coordinates (x2, y2) - coordinates of the lower right corner. Find unpainded area of the canvas*/

#include <iostream>
using namespace std; 

int main(){
    int n, m, h, x1, y1, x2, y2;
    cin >> n >> m;
    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=1;
        }
    }

    cin >> h;
    for(int k=0; k<h; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                a[i][j]=0;
            }
        }
    }

    int s=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            s += a[i][j];
        }
    }

    cout << s << endl;
}