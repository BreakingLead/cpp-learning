#include <iostream>
#include <cstdio>
using namespace std;
int fastPow(int a, int n)
{
    if (n == 0)
        return 0;
    if (n % 2 == 1)
        return fastPow(a, n - 1)*a;
    else
    {
        int tmp = fastPow(a, n / 2);
        return tmp * tmp;
    }
}
int main()
{
    cout<<fastPow(2,16);
    return 0;
}