#include<iostream>
using namespace std;

double e(int x, int n)
{
    static double p=1, f=1;
    double r=0;
    if(n==0)
    return 1;
    else
    {
    e(x,n-1);
    p=p*x;
    f=f*n;
    return (r+(p/f));
    }
}

int main()
{
    double ans=0;
    ans=e(1,10);
    printf("%d", ans);
    return 0;
}