#include<bits/stdc++.h>
using namespace std;
#define tol 0.0001
double f(double x)
{
    return x*x*x - x -2;
}
void bisection(double a, double b)
{
    if(f(a)*f(b) >= 0)
        return;

    double c;
    int i=0;
    while(i < 100)
    {
        c = (a+b)/2;
        if(f(c)== 0 || abs(f(c)) <= tol)
            break;
        else if(f(a)*f(c)< 0)
            b=c;
        else
            a=c;
        i++;
    }
    if(i >= 100)
        cout << "Not converged" << endl;
    else
        cout << c << endl;
}
int main()
{
    double a, b;
    cin >> a >> b;
    bisection(a,b);
    return 0;
}
