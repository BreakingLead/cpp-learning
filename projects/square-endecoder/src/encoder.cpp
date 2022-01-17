#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include "encoder.hpp"

using namespace std;

Encoder::Encoder(origin_data _in_datas)
{
    in_datas = _in_datas;
}

void Encoder::SetDatain(origin_data data);
{
}

void Encoder::GenerateEncodedData()
{
    int sum;
    for (auto i : in_datas)
    {
        if (in_datas[i] - '0' < 0)
            throw exception();
        sum += in_datas[i] - '0';
    }
    int flag = 0;
    for (auto i : in_datas)
    {
        for (int j = 0; j < in_datas[i] - '0'; i++)
        {
            out_datas.push_back(flag);
        }
        flag = !flag;
    }
}

origin_data Encoder::GetEncodedData()
{
    return out_datas;
}