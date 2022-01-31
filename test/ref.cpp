#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int a;
    int &b=a;
    a=123;
    b=456;
    printf("%d",b);
    return 0;
}