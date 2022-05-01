#include <string>

#include "BitFlip.h"
using namespace std;

// Methods
void BitFlip::mutate(Individual * individual, int k)
{
    individual->flipBit(k-1);
};

