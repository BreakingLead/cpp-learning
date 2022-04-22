#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    double c1,c2,c3;
    for(int i=0;i<n;i++){
        cin>>c1>>c2>>c3;
        if(c2+c3>140 && c2*0.7+c3*0.3>80)cout<<"Excellent\n"; else cout<<"Not excellent\n";
    }
    return 0;
}
