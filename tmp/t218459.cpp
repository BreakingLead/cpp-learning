#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
typedef unsigned long long ULL;
typedef unsigned long long* UP;
//gcd(a,b)=gcd(b,a%b)
ULL gcd(ULL a,ULL b){
    int r;
    if(a<b){
        ULL tmp;
        swap(a,b);
    }
    while((a%b)!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}

ULL lcm(ULL a,ULL b){
    return a*b/gcd(a,b);
}

int main(){
    long long a1,a2,a3,a4;
    long long b1,b2;
    long long c1;
    cin>>a1>>a2>>a3>>a4;
    b1=a1*a2/gcd(a1,a2);
    b2=a3*a4/gcd(a3,a4);
    c1=b1*b2/gcd(b1,b2);
    long long week=(c1%7==0)?c1/7-1:c1/7;
    long long days=c1-week*7;

    cout<<week<<endl<<days;
}