#include <iostream>
#include "decoder.hpp"
#include "encoder.hpp"
using namespace std;

int main(int argc, char** argv)
{
    Encoder en({'1','3','4','5','6','7'});
    vector<char> encoded_data=en.GenerateEncodedData();
    return 0;
}
