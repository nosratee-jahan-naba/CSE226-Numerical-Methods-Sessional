#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin  >> n;

    double v[n][n+1];  // [A:B]

    for(int i = 0; i < n; i++)
       for(int j = 0; j <= n; j++)
           cin >> v[i][j];

    // this loop -->  pivot element, v[i][i] ==> 1 ,v[0][0] = 1.....
    for(int i = 0; i < n; i++)
    {
        double pivot = v[i][i];
        for(int j = 0; j <= n; j++)
            v[i][j] /= pivot;       
    }

    for(int i = 0; i < n; i++)   //For each pivot row i.
    {
        for(int j = 0; j < n; j++)    //For each row j in the matrix.
        {
            if(j != i)   // Skip the pivot row itself 
            { 
                double factor = v[j][i];    // element which we want to make 0
                for(int k = 0; k <= n; k++)
                    v[j][k] -= factor * v[i][k];   // Row operation: Rj -= factor × Ri
            }
        }   
    }


    for(int i = 0; i < n; i++)
        cout << v[i][n] << " " << endl;

    return 0;
}
    
   
