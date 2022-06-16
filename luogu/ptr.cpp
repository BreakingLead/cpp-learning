#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <iterator>
#include <string>
#define MAXN 1005
using namespace std;
int n,a[MAXN];
int main() {
    a[1]=123;
    printf("%d\n",*(a+1));
    return 0;
}
