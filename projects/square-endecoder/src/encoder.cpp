#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class Encoder
{
private:
    vector<char> in_datas;
    vector<char> out_datas;

public:
    Encoder(vector<char> _in_datas)
    {
        in_datas = _in_datas;
    }

    void SetDatain()
    {

    }

    void GenerateEncodedData()
    {
        int sum;
        for (auto i : in_datas)
        {
            if (in_datas[i] - '0' < 0)
                throw exception();
            sum += in_datas[i] - '0';
        }
        int flag=0;
        for (auto i : in_datas)
        {
            for (int j = 0; j < in_datas[i] - '0'; i++)
            {
                out_datas.push_back(flag);
            }
            flag=!flag;
        }
    }

    vector<char> GetEncodedData()
    {
        return out_datas;
    }
};