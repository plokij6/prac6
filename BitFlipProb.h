#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"




class BitFlipProb : public Mutator
{
public:
	BitFlipProb(double prob);
	virtual Individual * mutate(Individual *ind, int k);
private:
	double proba;
	
};

#endif //BITFLIPPROB_H
