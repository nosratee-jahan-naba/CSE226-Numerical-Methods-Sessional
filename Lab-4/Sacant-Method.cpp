#include <bits/stdc++.h>
using namespace std;
#define tol 0.001

double f(double x) 
{
    return 3 * x - cos(x) - 1;
}
void secant(double a, double b)
{
    int i = 0;
    double c;
    if (f(a) * f(b) >= 0)
    {
        cout << "Invalid interval" << endl;
        return;
    
    while (i <= 100)
    {
        c = b - f(b) * (b - a) / (f(b) - f(a));

        if(fabs(c - b) < tol)
        {
            cout << "converged"<< endl;
            break;
        }
        a = b;
        b = c;
        i++;
    }
    if (i > 100)
        cout << "Did not converge within 100 iterations." << endl;
    else
        cout << "The value of the root is : " << c << endl;
}
int main()
{
    double a, b;
    cin >> a >> b;
    secant(a, b);
    return 0;
}
