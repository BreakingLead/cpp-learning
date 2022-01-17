
#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<char> origin_data;
class Encoder
{
private:
    vector<char> in_datas;
    
public:
    Encoder(origin_data);
    void SetDatain(origin_data);
    void GenerateEncodedData();
    origin_data GetEncodedData();
};