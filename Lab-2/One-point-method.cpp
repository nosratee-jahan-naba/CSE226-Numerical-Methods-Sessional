#include <bits/stdc++.h>
#define tol 0.001
using namespace std;

double f(double x) 
{
    return 3 * x  - cos(x) - 1;
}
double g(double x) 
{
    return (1 + cos(x)) / 3;
}
void onepoint(double x0) 
{
    int i = 1;
    double x = x0,xn; 

    while (i <= 100)
    {
        xn = g(x);
        cout << xn << endl;
        if (fabs(x - xn) < tol)
            break;
        
        x = xn;
        i++;
    }
    if (i > 100)
        cout << "Did not converge within 100 iterations." << endl;
    else
        cout << "The value of the root is : " << x << endl;
}
int main() 
{
    double x0; 
    cin >> x0;
    onepoint(x0);
    return 0;
}


//------ why  (fabs(f(xn)) <= tol)   ?
// Because in root-finding, we want f(x) = 0. But computers can’t always get exactly zero,
//  so we accept a very small error (tol) as good enough.


//------ Why use max iterations (n)?
// To stop the program if it runs too long without finding the root.
// To avoid infinite loops when the method doesn’t converge.
// To save computer time and resources.
// To know if the method is not working properly or the initial guess is bad.
// To make the program safe and reliable.