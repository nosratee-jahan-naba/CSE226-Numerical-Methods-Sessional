#include <bits/stdc++.h>
using namespace std;
#define tol 0.001
double a, b;
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
    double x = a;
    double h = f(x) / df(x);
    int i = 0;
    while (i <= 100)
    {
        h = f(x) / df(x);
        x = x - h;

        cout << x << endl;

        i++;
        if (fabs(h) < tol )
            break;
    }
    if(i > 100)
       cout << "Did not converge within 100 iterations." << endl;
    else
       cout << "The value of the root is : " << x << endl;
}
int main()
{
    cin >> a >> b; 
    newtonRaphson(a, b);
    return 0;
} 
