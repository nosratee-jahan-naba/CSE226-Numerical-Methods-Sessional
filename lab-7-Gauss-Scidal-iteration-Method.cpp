#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;

    double a[3][3] =
    {
        {27, 6, -1},
        {6, 15, 2},
        {1, 1, 54}
    };

    double b[3] = {85, 72, 110};

    double x[3] = {0, 0, 0};

    for (int iter = 0; iter < 25; iter++)
    {
        for (int j = 0; j < n; j++)
        {
            double sum = b[j];
            for (int i = 0; i < n; i++)
            {
                if (i != j)
                    sum -= a[j][i] * x[i];
            }
            x[j] = sum / a[j][j];
        }
    }


    for (int i = 0; i < n; i++)
        cout << x[i] << endl;


    return 0;
}
