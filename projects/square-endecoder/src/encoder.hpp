
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
    Encoder(vector<char>);
    vector<char> GenerateEncodedData();
    vector<char> GenerateEncodedData(vector<char>);
    vector<char> GenerateChessEncodedData();
    vector<char> GenerateChessEncodedData(vector<char>);
};