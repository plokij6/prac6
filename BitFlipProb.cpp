#include "BitFlipProb.h"
#include "Mutator.h"
#include <cstdlib>
#include <string>

BitFlipProb::BitFlipProb(double prob){
	proba=prob;
}

Individual * BitFlipProb::mutate(Individual *ind, int k){
	std::string temp = ind->getString();
	int len = temp.length();
	double randnum;

	for (int i = 0; i < len; ++i)
	{
		randnum=(double)rand()/RAND_MAX;
		if (temp[i]=='0'&&randnum<proba)
		{
			temp[i]='1';
		}else if (temp[i]=='1'&&randnum<proba)
		{
			temp[i]='0';
		}
	}
	Individual * ret = new Individual(temp);
	return ret;
}