#include <string>
#include <iostream>
#include "Rearrange.h"
#include "Individual.h"
using namespace std;

// Methods
void Rearrange::mutate(Individual * individual, int k)
{
    string s = individual->getString();
    
    Individual individual2 = Individual(s.substr(k-1,individual->getLength()) + s.substr(0,k-1));
    
    for(int i =0 ; i<individual->getLength(); i++){
        if(individual2.getBit(i) != individual->getBit(i)){
            individual->flipBit(i);
        }
    }
};

