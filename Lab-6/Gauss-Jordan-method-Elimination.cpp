#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin  >> n;

    double v[n][n+1];  // [A:B]

    for(int i = 0; i < n; i++)
       for(int j = 0; j <= n; j++)
           cin >> v[i][j];

    for(int i = 0; i < n; i++)  // for each pivot row
    {
        // Make the pivot = 1
        double pivot = v[i][i];
        for(int j = 0; j <= n; j++)
            v[i][j] /= pivot;

        // Make all other elements in this column = 0
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                double factor = v[j][i];
                for(int k = 0; k <= n; k++)
                    v[j][k] -= factor * v[i][k];
            } 
       }
    }


    for(int i = 0; i < n; i++)
        cout << v[i][n] << " " << endl;

    return 0;
}
    
   
