#include "Rearrange.h"
#include "Mutator.h"
#include "Individual.h"
#include <string>

Individual * Rearrange::mutate(Individual *ind, int k){
	std::string temp = ind->getString();
	std::string temp2 = ind->getString();
	int len = temp.length();
	int cut = k%len;
	

	for (int i = 0; i < len-cut+1; ++i)
	{
		temp2[i]=temp[i+cut-1];
	}

	for (int i = 0; i < cut-1; ++i)
	{
		temp2[len-cut+1+i]=temp[i];
	}
    
    
	Individual * ret = new Individual(temp2);

	return ret;


}