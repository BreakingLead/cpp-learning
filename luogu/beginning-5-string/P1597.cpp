
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
char c[128];
int main(){
    char c1=0,c2=0;
    c['a']=0;
    c['c']=0;
    c['b']=0;
    while(scanf("%c:=%c;",&c1,&c2)==2){
        if(c2>='a')
            c[c1]=c[c2];
        else c[c1]=c2;
    }
    printf("%c %c %c",c['a'],c['b'],c['c']);
    return 0;
}
