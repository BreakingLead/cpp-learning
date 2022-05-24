#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
struct node {
    string x;
    int    num;
} a[ 25 ];
bool cmp( node a, node b ) {
    if(a.x.length()!=b.x.length())return a.x.length()>b.x.length();
    return a.x>b.x;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen( "/home/guo/Devel/cpp-learning/luogu/std.in", "r", stdin );
#endif // !ONLINE_JUDGE

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x;
        a[i].num=i;
    }
    node maxx=a[1];
    for(int i=1;i<=n;i++){
        if(!cmp(maxx, a[i])){
            maxx=a[i];
        }
    }
    cout<<maxx.num<<endl<<maxx.x;
    return 0;
}
