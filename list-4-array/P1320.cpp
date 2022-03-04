#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main()
{
    char n;
    vector<int> map;
    vector<int> answer;
    //map.push_back(0);
    while (cin>>n)
        map.push_back(n - '0');
    for(int i=0,num=0,sum=0;i<=map.size()+1;i++){
        if(num==map[i]){
            sum++;
        }else{
            printf("%d ",sum);
            sum=1;
            num=map[i];
        }
    }
    return 0;
}
