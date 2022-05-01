#include "Individual.h"
#include "Mutator.h"
using namespace std;

#ifndef Rearrange_H
#define Rearrange_H
class Rearrange : public Mutator
{
private:
    
public:
    void mutate(Individual * individual, int k) override;
};
#endif