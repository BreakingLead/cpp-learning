#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int ival=1024;
    int *p0=&ival;
    int **p1=&p0;
    printf("%d",**p1);
    return 0;
}