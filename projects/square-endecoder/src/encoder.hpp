#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
#pragma once
using namespace std;
typedef vector<char> origin_data;
class Encoder
{
private:
    origin_data in_datas;
    origin_data out_datas;
    
public:
    Encoder(origin_data);
    void GenerateEncodedData();
    origin_data GetEncodedData();
};