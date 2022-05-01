#include <string>

using namespace std;

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
class Individual
{
private:
    string binaryString;
public:
    Individual(int binaryLength);
    Individual(string binaryString);
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
};
#endif