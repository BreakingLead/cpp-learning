#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[25][25];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 25; i++)
    {
        a[1][i] = 1;
        a[i][1] = 1;
    }
    for (int i = 2; i <= 25; i++)
    {
        for (int j = 2; j <= 25; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    //for(int i=1;i<=5;i++){
    //    for(int j=1;j<=5;j++){
    //        printf("%3d",a[i][j]);
    //    }
    //    printf("\n");
    //}
    for(int i=1;i<=n;i++)
    {
        int t1=i,t2=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a[t1][t2]);
            t1--;t2++;
        }
        printf("\n");
    }
    return 0;
}