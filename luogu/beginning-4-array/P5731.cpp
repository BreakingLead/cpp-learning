#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,a[15][15];
int main(){
    int x=1,y=0,s=1;
    scanf("%d",&n);
    while(s<=n*n)
    {
        while( y<n&&( !a[x][y+1] ) )a[x][++y]=s++;
        while( x<n&&( !a[x+1][y] ) )a[++x][y]=s++;
        while( y>1&&( !a[x][y-1] ) )a[x][--y]=s++;
        while( x>1&&( !a[x-1][y] ) )a[--x][y]=s++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
