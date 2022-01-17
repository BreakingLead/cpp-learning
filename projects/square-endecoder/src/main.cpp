#include <iostream>
#include "encoder.hpp"
using namespace std;

int main(int argc, char** argv)
{
    origin_data tmp={'1','1','4','5','1','4'};
    Encoder encoder(tmp);
    encoder.GenerateEncodedData();
    origin_data out;
    for(auto i:out){
        printf("%d ",out[i]);
    }
    return 0;
}
