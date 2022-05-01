#include <string>

#include "BitFlipProb.h"
using namespace std;

// Methods
BitFlipProb::BitFlipProb(double probability){
    this->probability = probability;
}
void BitFlipProb::mutate(Individual * individual, int k)
{
    for(int i= 0; i < individual->getLength(); i++){
        individual->flipBit(i);
    }
    
};

