#ifndef REARRANGE_H
#define REARRANGE_H
#include "Rearrange.h"
#include "Mutator.h"




class Rearrange : public Mutator
{
	virtual Individual * mutate(Individual *ind, int k);
	
};

#endif //REARRANGE_H
