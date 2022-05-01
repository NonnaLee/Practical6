#include <string>

#include "Individual.h"
using namespace std;

// Constructors
Individual::Individual(int binaryLength){
    this->binaryString = "";
    this->binaryString.insert(0, binaryLength, '0');
}
Individual::Individual(string binaryString){
    this->binaryString = binaryString;
}

// Methods
string Individual::getString()
{
    return this->binaryString;
};

int Individual::getBit(int pos){
    if(pos >= this->getLength()){
        return(-1);
    }
    else if(this->binaryString[pos] == '1'){
        return 1;
    }
    else{
        return 0;
    }
};
void Individual::flipBit(int pos){
    if(pos >= this->getLength()){
        return;
    }
    if(this->binaryString[pos] == '1'){
        this->binaryString[pos] = '0';
    }else{
        this->binaryString[pos] = '1';
    }
};
int Individual::getMaxOnes(){
    int len = this->getLength();
    int maxOnes = 0;
    int countOnes = 0;
    for(int i = 0; i < len; i++){
        if(this->binaryString[i] == '1'){
            countOnes++;
            if(countOnes > maxOnes){
                maxOnes = countOnes;
            }
        }else{
            countOnes = 0;
        }
    }
    return maxOnes;
};
int Individual::getLength(){
    return this->binaryString.length();
};