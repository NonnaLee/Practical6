#include <string>
#include "Individual.h"
using namespace std;

#ifndef MUTATOR_H
#define MUTATOR_H
class Mutator
{
private:
    
public:
    virtual void mutate(Individual * individual, int k);
};
#endif