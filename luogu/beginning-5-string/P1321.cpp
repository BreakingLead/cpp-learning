#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <iterator>
using namespace std;
    string str;
    int b,g;
int main() {
    cin>>str;
    for(int i=0;i<=str.length();i++){
        if(str[i]=='b'||str[i+1]=='o'||str[i+2]=='y')b++;
        if(str[i]=='g'||str[i+1]=='i'||str[i+2]=='r'||str[i+3]=='l')g++;
    }
    printf("%d\n%d",b,g);
    return 0;
}
