#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int ans=0;
    int n;
    char s[101];
    cin>>n>>s;

    for(int i=0;i<strlen(s)-1;i++){
        if((s[i]=='V'&&s[i+1]=='K')){
            s[i]='*';
            s[i+1]='*';
            ans++;
        }
    }
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]!='*'&&s[i]==s[i+1]){
            ans++;
            cout<<ans;
            return 0;
        }
    }
    cout<<ans;
    return 0;
}
