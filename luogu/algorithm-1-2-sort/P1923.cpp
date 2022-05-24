#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
int n,a[MAXN],ans,k;

void findkth(int l,int r){
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE
    cin>>n>>k;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    findkth(0,n-1);
    printf("%d\n",k);
    return 0;
}
