#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;
int n;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/home/guo/Devel/cpp-learning/algorithm-1-1/a.in","r",stdin);
    #endif // !ONLINE_JUDGE
           //
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        int pren;
        cin>>pren;
        if(pren!=0){
            if(i!=n && pren>0)cout<<"+";
            if(abs(pren)!=1 || i==0)cout<<pren;
            if(pren==-1&&i!=0)cout<<"-";
            if(i>1)cout<<"x^"<<i;
            if(i==1)cout<<"x";
        }
    }
    return 0;
}
