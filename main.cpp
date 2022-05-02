#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <string>

Individual * execute(Individual* iPtr, Mutator* mPtr, int k){
	Individual * ret = mPtr->mutate(iPtr,k);
	return ret; 
};

int main(){
	Mutator * mut1 = new BitFlip();
	Mutator * mut2 = new Rearrange();

	char binarystr1[100];
	int k1;
	char binarystr2[100];
	int k2;

	scanf("%99s %i %99s %i", binarystr1, &k1, binarystr2, &k2);

	Individual * ind1 = new Individual(binarystr1);
	Individual * ind2 = new Individual(binarystr2);

	Individual * ind1after = execute(ind1,mut1,k1);
	Individual * ind2after = execute(ind2,mut2,k2);

	std::string ind1str = ind1after->getString();
	std::string ind2str = ind2after->getString();

	Individual * indcopy = new Individual(ind2str);

	int maxones = indcopy->getMaxOnes();

	std::cout<<ind1str<<" "<<ind2str<<" "<<maxones<<std::endl;
		
}