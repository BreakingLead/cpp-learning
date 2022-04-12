#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int a[26];
int strn[512];
int maxn=-0x3f3f3f;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("f.in", "r", stdin);
    freopen("f.p", "w", stdout);
    #endif
    char c;
    while(scanf("%c",&c)==1){
        strn[c]++;
    }
    for(int i='A';i<='Z';i++){
        maxn=max(maxn,strn[i]);
    }
    
    
    for(int i=maxn;i>0;i--){
        for(int j='A';j<='Z';j++){
            if(strn[j]>=i)printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(char i='A';i<='Z';i++){
        printf("%c ",i);
    }
    return 0;
}
