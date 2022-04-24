#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
int gcd(int a,int b){
    // 104 40
    // 104 / 40 = 2 ... 24
    // 40 / 24 = 1 ... 16
    //
    int r=a%b;
    if(r==0)return b;
    return gcd(b,r);
}
int main() {
    printf("%d\n",gcd(258,1395));
    return 0;
}
