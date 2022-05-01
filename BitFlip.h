#include "Individual.h"
#include "Mutator.h"
using namespace std;

#ifndef BIT_FLIP_H
#define BIT_FLIP_H
class BitFlip : public Mutator
{
private:
    
public:
    void mutate(Individual * individual, int k) override;
};
//BitFlipProb
#endif