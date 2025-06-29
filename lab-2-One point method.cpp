#include <bits/stdc++.h>
#define tol 0.0001
using namespace std;

double f(double x) 
{
    return cos(x) - 3 * x + 1;
}

double g(double x) 
{
    return (1 + cos(x)) / 3;
}

void onepoint(double x0) 
{
    int i = 1, n = 100;
    double xn = x0; 

    while (fabs(f(xn)) > tol)
    {
        if (i > n)  
        {
            cout << "Not Convergent." << endl;
            break;
        }
        xn = g(xn);
        i++;
    }
    cout << "Root = " << xn << endl;
}

int main() 
{
    double x0 = 3.2; 

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