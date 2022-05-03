#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
    string str;
    int n;
    scanf("%d",&n);
    cin>>str;
    for(int i=1;i<=n;i++){
        int opcode;
        scanf("%d",&opcode);

        if(opcode==1)
        {
            string t;
            cin>>t;
            str+=t;
            cout<<str<<endl;
        }else if(opcode==2)
        {
            int a,z;
            string tmp;
            cin>>a>>z;
            tmp=str.substr(a,z);
            str=tmp;
            cout<<str<<endl;
        }else if (opcode==3)
        {
            int b,b1;
            cin>>b>>b1;
	        str.insert(b,b1);
            cout<<str<<endl;
        }else if (opcode==4){
            int f;
            if(str.size()>str.find(f)){
                cout<<str<<endl;
            }
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
