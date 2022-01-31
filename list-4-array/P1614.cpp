#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a[4000];
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    int sum=0;
    for(int i=1;i<=m;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}