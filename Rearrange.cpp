#include "Rearrange.h"
#include "Individual.h"
#include "Mutator.h"
#include <string>

Individual * Rearrange::mutate(Individual *ind, int k){
	std::string temp = ind->getString();
	int len = temp.length();
	int cut = k%len;
	Individual * indi = new Individual(len);

	for (int i = 0; i < len-cut+1; ++i)
	{
		indi[i]=temp[i+cut-1];
	}

	for (int i = 0; i < cut-1; ++i)
	{
		indi[len-cut+1+i]=temp[i];
	}
    
    std::string copy = indi->getString();
	Individual * ret = new Individual(copy);

	return ret;


}