#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
bool cube[25][25][25];
int q,w,x,h,cnt=0;
void toZero(int x1,int y1,int z1,int x2,int y2,int z2){
    for(int i=x1;i<=x2;i++)
    for(int j=y1;j<=y2;j++)
    for(int k=z1;k<=z2;k++)
    cube[i][j][k]=false;
}
void check(){
    for(int i=1;i<=w;i++)
    for(int j=1;j<=x;j++)
    for(int k=1;k<=h;k++)
    if(cube[i][j][k])
    cnt++;
}
int main(){
    int x1,y1,z1,x2,y2,z2;
    cin>>w>>x>>h>>q;
    memset(cube,true,sizeof(cube));
    for(int i=1;i<=q;i++){
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        toZero(x1,y1,z1,x2,y2,z2);       
    }
    check();
    cout<<cnt;
    return 0;
}