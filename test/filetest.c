#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp=fopen("/tmp/a.in","a+");
    fputs("[INFO] Hello, World!\n",fp);
    fclose(fp);
    return 0;
}