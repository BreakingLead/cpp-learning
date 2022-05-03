#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[15];
    int ans=0;
    fgets(c,15,stdin);
    int len=strlen(c);
    for (int i=0;i<len;i++)
        if (isalnum(c[i]))
            ans++;
    printf("%d",ans);

    
    return 0;
}
