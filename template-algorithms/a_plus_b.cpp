
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <istream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
int n, a[ MAXN ];

struct BigInteger {
    int length, a[ MAXN ];
    BigInteger() {
        memset( a, 0, sizeof( a ) );
        length = 1;
    }
    BigInteger( int x ){ *this = x; }
    BigInteger( char *x ) { *this = x; }
    BigInteger operator=( const char *raw ) {
        length = strlen( raw );
        printf("LEN:%d\n",length);
        for ( int i = 0; i < length; i++ ) a[i]=raw[length-1-i]-'0';
        return *this;
    }
    BigInteger operator+(const BigInteger &b){
        BigInteger c;
        c.length=0;
        int mlen=max(length,b.length);
        for(int i=0;i<mlen;i++){
            c.length++;
            c.a[i]=(a[i]+b.a[i])%10;
            c.a[i+1]=(a[i]+b.a[i])/10;
        }
        c.updateLength();
        return c;
    }
    string toString(){
        string res = "";
        for (int i=0;i<length;i++) res=(char)(a[i]+'0')+res;
        return res;
    }
    void updateLength(){
        while(length>1 && a[length]!=-0) length -- ;
    }
};
istream& operator >> (istream &in,BigInteger &x){
    string s;
    in>>s;
    x=s.c_str();
    return in;
}
ostream& operator << (ostream &out,BigInteger &x){
    out<<x.toString();
    return out;
}

int main() { 
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE

    BigInteger a,b;
    cin>>a;
    cin>>b;
    BigInteger c;
    c=a+b;
    cout<<c;
    return 0;
}
