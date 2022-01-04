#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp=NULL;
    fp=fopen("a.in","a+");
    fprintf(fp,"Hello ,%s",__DATE__);
    fclose(fp);
    return 0;
}