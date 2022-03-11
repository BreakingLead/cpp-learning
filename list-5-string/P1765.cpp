#include <algorithm>
#include <cmath>
#include <string>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;



int main() {
    int map[26]={
        1,2,3,
        1,2,3,
        1,2,3,
        1,2,3,
        1,2,3,
        1,2,3,4,
        1,2,3,
        1,2,3,4
    };
    string str;
    int cnt;
    getline(std::cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]==' ')cnt++;
        if('a'<=str[i]&&str[i]<='z'){
            cnt+=map[str[i]-'a'];
        }
    }
    printf("%d\n",cnt);
    return 0;
}

