#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 10
using namespace std;
int n,a[MAXN],t,ptr;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/luogu/std.in","r",stdin);
    #endif // !ONLINE_JUDGE
    cin >> t;
    for(int i=0;i<t;i++){
        int now=0;
        int cnt=0;
        cin>>now>>a[1]>>a[2]>>a[3];
        ptr=now;
        while(a[ptr]!=0){
            ptr=a[ptr];
            cnt++;
        } 
        if(cnt==2){
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }
    return 0;
}
