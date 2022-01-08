#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int mat[45][45];
int main()
{
    int n;
    cin>>n;
    n=n%2==1?n:n+1;
    mat[1][((n+1)/2)] = 1;
    //for (int i = 1; i <= n; i++)
    //{
    //    for (int j = 1; j <= n; j++)
    //    {
    //        cout << mat[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    int row;
    int column;
    for(int k=2;k<=n*n;k++){
        row=k/n+1;
        column=k%n+1;
        cout<<row<<" "<<column<<endl;
    }
    return 0;
}