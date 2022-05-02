// g++ -o main.exe -std=c++11 -O2 -Wall ./main.cpp && echo "000000 2 0111 2" | ./main.exe
#include <iostream>
#include <vector>
#include <string>

//#include "Individual.h"
//#include "Mutator.h"
//#include "BitFlip.h"
//#include "Rearrange.h"
//#include "BitFlipProb.h"


#include "Individual.cpp"
#include "Mutator.cpp"
#include "BitFlip.cpp"
#include "Rearrange.cpp"
#include "BitFlipProb.cpp"


Individual * execute(Individual * indPtr, Mutator * mPtr, int k){
  Individual * newIndPtr = new Individual(indPtr->getString());
  mPtr->mutate(newIndPtr, k);
  return newIndPtr;
}

int main()
{
  // SETUP
  string input;

  string binarystr1 = "";
  string k1Str = "";
  string binarystr2 = "";
  string k2Str = "";

  // GET INPUT
  std::getline(std::cin, input);
  int len = input.length();
  int num = 0;
  for(int i = 0; i < len; i++){
    if(input[i] == ' '){
      num++;
    }else{
      if(num == 0){
        binarystr1 += input[i];
      } else if(num == 1){
        k1Str += input[i];
      } else if(num == 2){
        binarystr2 += input[i];
      } else if(num == 3){
        k2Str += input[i];
      }
    }
  }
  int k1 = std::stoi(k1Str); 
  int k2 = std::stoi(k2Str); 
  // RUN
  Individual * newIndPtr1 = new Individual(binarystr1);
  Individual * newIndPtr2 = new Individual(binarystr2);
  BitFlip * bitFlip = new BitFlip();
  Rearrange * rearrange = new Rearrange();

  Individual * mutatedIndividual1 = execute(newIndPtr1, bitFlip, k1);

  Individual * mutatedIndividual2 = execute(newIndPtr2, rearrange, k2);
  
  // 000000 2 0111 2
  // Individual individual("0010111101111111");
  /*
  std::cout << "binarystr1: " << binarystr1 << std::endl;
  std::cout << "k1: " << k1 << std::endl;
  std::cout << "binarystr2: " << binarystr2 << std::endl;
  std::cout << "k2: " << k2 << std::endl;

  std::cout << "mutated: " << mutatedIndividual->getString() << std::endl;
  */
  std::cout << mutatedIndividual1->getString() << " " << mutatedIndividual2->getString() << " " << mutatedIndividual2->getMaxOnes() << std::endl;
  return 0;
}