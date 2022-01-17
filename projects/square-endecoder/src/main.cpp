#include <iostream>
#include "decoder.hpp"
#include "encoder.hpp"
using namespace std;

int main(int argc, char** argv)
{
    Encoder en({'1','3','4','5','6','7'});
    en.GenerateEncodedData();
    vector<char> out=en.GetEncodedData();
    for(auto i:out){
        printf("%d ",out[i]);
    }
    return 0;
}
