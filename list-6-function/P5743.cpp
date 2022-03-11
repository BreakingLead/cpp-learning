#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int n;
    int a=1;
    scanf("%d",&n);
    for(int i=1; i < n; i++){
        a=(a+1)*2;
    }
    printf("%d\n",a);
    return 0;
}

