#include <bits/stdc++.h>
#define tol 0.0001
using namespace std;

double f(double x)
{
    return 3*x - cos(x) -1;
}

double g(double x)
{
    return (cos(x)+1)/3;
}

void onepoint(double xo)
{
    int i=0;
    double x=xo,xn;
    while(i<=100)
    {
        xn = g(x);
        if(fabs(xn-x) < tol || xn == 0)
        {
            cout << "root = "<< xn << endl;
            return;
        }

        x = xn;
        i++;
    }
    cout << "Did not converge within 100 iterations." << endl;
}


int main()
{
    double xo; cin >> xo;
    onepoint(xo);
    return 0;
}
