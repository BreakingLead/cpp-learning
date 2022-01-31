#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[15][15];
int main(){
    int x,y;
    while(1){
        cin>>x>>y;
        a[x][y]=1;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}