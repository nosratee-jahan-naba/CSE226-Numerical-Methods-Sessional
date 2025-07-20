#include <bits/stdc++.h>
using namespace std;
#define tol 0.0001

double f(double x)
{
    return 3*x - cos(x) -1;
}

double df(double x)
{
    return 3 + sin(x);
}


void newtonRaphson(double a)
{ 
    int i = 0;
    double xn, x = a, h;

    while(i <= 100)
    {
        if(df(x) == 0)   
        {
            cout << "zero division error" << endl;
            return;
        }
        h = f(x)/df(x);
        xn = x - h;
        if(fabs(xn - x) <= tol || f(xn) == 0)
        {
            cout << "root = " << xn << endl;
            return;
        }
        x = xn;
        i++;
    }
    cout << "Did not converge" << endl;
}
 


int main()
{
    cin >> a; 
    newtonRaphson(a);
    return 0;
} 
