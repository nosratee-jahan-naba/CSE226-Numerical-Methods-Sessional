#include <bits/stdc++.h>
using namespace std;
#define tol 0.001

double f(double x) 
{
    return 3 * x - cos(x) - 1;
}

double df(double x) 
{
    return 3 + sin(x);
}

void newtonRaphson(double a, double b) 
{
    if (f(a) * f(b) >= 0) 
    {
        cout << "Invalid interval" << endl;
        return;
    }

    double x0 = a;
    double xn;
    
    int i = 0, n = 100;
    while (i < n) 
    {
        xn = x0 - f(x0) / df(x0);

        if (fabs(f(xn)) <= tol || fabs(xn - x0) <= tol) 
        {
            cout << "Root = " << xn << endl;
            break;
        }

        x0 = xn;
        i++;
    }

    cout << "Not Converged" << endl;
}

int main() 
{
    double a, b;
    cout << "Enter interval [a b]: ";
    cin >> a >> b;

    newtonRaphson(a, b);

    return 0;
}
