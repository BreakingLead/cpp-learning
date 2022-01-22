#include <iostream>
#include <cstdio>
#include <algorithm>
#define PR 0.0000001
using namespace std;
double h=22222273304;
double dh=0.8;
double stval=200000;

int main(){
    while(1)
    {
        dh=1/(abs(stval-h)*PR);
        h*=dh;
        printf("%lf\n",h);
    }
    return 0;
}