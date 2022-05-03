#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
// WWWWWWWWWWW  WWWWWWWWWWW  LW
// WWWWW WWWWW WWWWW WWWWWW WLW
int wl[25*2500+5],n=0;
int scmax[2] = {11,21};

int main() {
    while ( 1 ) {
        char c;
        scanf("%c",&c);
        if(c=='E')break;
        //Huahua won
        if(c=='W')wl[n]=1,n++;
        //Huahua lose
        if(c=='L')wl[n]=0,n++;
    }
    for(int k=0;k<2;k++){
        int wins=0,loses=0;
        for(int i=0;i<n;i++){
            if(wl[i]==1){
                wins++;
            }else{
                loses++;
            }
            if(max(wins,loses)>=scmax[k] && abs(wins-loses)>=2){
                printf("%d:%d\n",wins,loses);
                wins=loses=0;
            }
        }
        printf("%d:%d\n",wins,loses);
        printf("\n");
    }
    return 0;
}
