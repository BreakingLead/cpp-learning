#include <stdio.h>
int main(){
    for(int i=0;i<128;i++){
        if(i%2!=0)printf("\n");
        printf("%3d%c ",i,(char)i);
    }
    return 0;
}
