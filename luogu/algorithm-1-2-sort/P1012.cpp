#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
string a[MAXN];
int n;
bool cmp(string a,string b){
    return a+b>b+a;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE
    string res;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        res.append(a[i]);
    }
    cout<<res;
    return 0;
}
