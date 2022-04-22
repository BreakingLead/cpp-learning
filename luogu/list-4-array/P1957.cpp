#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <algorithm>
using namespace std;
int main(){
    int n,a,b;
    scanf("%d",&n);
    char ans[100],str[100];
    char op;
    for(int i=1;i<=n;i++){
        scanf("%s",str);
        if(isalpha(str[0]))
        {
            op=str[0];
            scanf("%d%d",&a,&b);
        }
        else
        {
            a=atoi(str));
            b=scanf("%d",&b);
        }
        switch (op)
        {
        case 'a':
            sprintf(ans,"%d+%d=%d",a,b,a+b);
            break;
        case 'b':
            sprintf(ans,"%d-%d=%d",a,b,a-b);
        default:
            sprintf(ans,"%d*%d=%d",a,b,a*b);
            break;
        printf("%s\n%d\n",ans,strlen(ans));
        }
    }
    return 0;
}