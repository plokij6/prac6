#include "Individual.h"
#include <string>
#include <iostream>



Individual::Individual(int len){
	
	for (int i = 0; i < len; ++i)
	{
		copy=copy+"0";
	}
}

Individual::Individual(std::string str){
	copy=str;
}

std::string Individual::getString(){
	return copy;
}

int Individual::getBit(int pos){
	

	return copy[pos]-48;
}

void Individual::flipBit(int pos){
	
	if (copy[pos]=='1')
	{
		copy[pos]='0';

	}else if (copy[pos]=='0')
	{
		copy[pos]='1';
	}
	
}

int Individual::getMaxOnes(){
	length=Individual::getLength();
	
	int count=0;
	int max=0;

	

	for (int i = 0; i < length; ++i)
	{
		if (copy[i]=='1')
		{
			count++;
			
			
		}
		if (copy[i]=='0')
		{
			if (count>max)
			{
				max=count;
			}
			
			count=0;
		}
			
	}
	if (count>max)
	{
		max=count;
	}
	return max;
}

int Individual::getLength(){
	length=copy.length();
	return copy.length();
}
