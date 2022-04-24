#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
int n,a[1000001];

void qsort(int left,int right){
    int mid=a[(left+right)/2];
    int i=left,j=right;
    do{
        while (a[i]<mid)i++;
        while (a[j]>mid)j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(left<j) qsort(left,j);
    if(i<right) qsort(i,right);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("a.in","r",stdin);
    #endif // !ONLINE_JUDGE
           //
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    qsort(1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}
