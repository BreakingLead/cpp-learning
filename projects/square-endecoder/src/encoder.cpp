#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Encoder
{
private:
    vector<char> in_datas;

public:
    Encoder(vector<char> _in_datas)
    {
        in_datas = _in_datas;
    }

    vector<char> GenerateChessEncodedData()
    {

        vector<char> out_datas;
        for (auto i : in_datas){
            if (in_datas[i] - '0' < 0)
                throw "Format is not correct!";
            
        }
        
        for(auto i:in_datas){
            
        }
    }
};