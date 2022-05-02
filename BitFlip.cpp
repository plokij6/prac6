#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"
#include <string>

Individual * BitFlip::mutate(Individual *ind, int k){
	std::string temp = ind->getString();
	int len=temp.length();
	if (temp[k%len]=='1')
	{
		temp[k%len]='0';
	}else if (temp[k%len]=='0')
	{
		temp[k%len]=='1';
	}

	Individual *ret = new Individual(temp);
	return ret;
}