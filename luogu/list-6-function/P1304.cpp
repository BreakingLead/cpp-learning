
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
bool is_prime(int x){
    if(x==1)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=4;i<=n;i+=2){
        for(int j=2;j<=i/2+1;j++){
            if(is_prime(j)&&is_prime(i-j)){
                printf("%d=%d+%d\n",i,j,i-j);
                break;
            }
        }
    }
    return 0;
}

