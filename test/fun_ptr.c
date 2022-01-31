#include <stdio.h>
#include <stdlib.h>
int max(int x,int y){
    return x>y?x:y;
}
int main(){
    int (*p)(int , int)=&max;
    printf("%d",p(1,2));
    return 0;
}