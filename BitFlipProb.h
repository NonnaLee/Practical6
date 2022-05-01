#include "Individual.h"
#include "Mutator.h"
using namespace std;

#ifndef BIT_FLIP_PROB_H
#define BIT_FLIP_PROB_H
class BitFlipProb : public Mutator
{
private:
    double probability;
public:
    BitFlipProb(double p);
    void mutate(Individual * individual, int k) override;
};
#endif