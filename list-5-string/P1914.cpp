#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n;char str[55];
    scanf("%d%s",&n,str);
    for(int i=0;i<strlen(str);i++){
        putchar((str[i]-'a'+n)%26+'a');
    }
    return 0;
}