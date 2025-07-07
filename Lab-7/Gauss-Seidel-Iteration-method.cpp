#include <bits/stdc++.h>
using namespace std;
#define tol 0.0001
int main()
{
    int n;
    cin >> n;

    double a[n][n], b[n], x[n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        x[i] = 0;

    int iter = 0;
    bool converged = false;

    while (iter < 100)
    {
        double x_old[n];
        for (int i = 0; i < n; i++)
            x_old[i] = x[i];

        for (int i = 0; i < n; i++)
        {
            double sum = b[i];
            for (int j = 0; j < n; j++)
            {
                if (j != i)
                    sum -= a[i][j] * x[j];
            }
            x[i] = sum / a[i][i];
        }
        bool allClose = true;
        for (int i = 0; i < n; i++)
        {
            if (fabs(x[i] - x_old[i]) > tol)
            {
                allClose = false;
                break;
            }
        }
        if (allClose)
        {
            converged = true;
            break;
        }
        iter++;
    }
    if (converged)
    {
        for (int i = 0; i < n; i++)
            cout << fixed << setprecision(6) << x[i] << endl;
    }
    else
    {
        cout << "Did not converge within 100 iterations." << endl;
    }

    return 0;
}
