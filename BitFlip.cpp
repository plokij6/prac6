#include "BitFlip.h"
#include "Mutator.h"
#include "Individual.h"
#include <string>

Individual * BitFlip::mutate(Individual *ind, int k){
	std::string temp = ind->getString();
	int len=temp.length();
	int count;
	count = k%len;
	if (count==0)
	{	if (temp[len-1]=='1')
	{
		temp[len-1]='0';
	}else if (temp[len-1]=='0')
	{
		temp[len-1]='1';
	}
	}
	if (temp[k%len-1]=='1')
	{
		temp[k%len-1]='0';
	}else if (temp[k%len-1]=='0')
	{
		temp[k%len-1]='1';
	}

	Individual *ret = new Individual(temp);
	return ret;
}