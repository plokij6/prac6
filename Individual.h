#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>



class Individual
{
public:
	std::string getString();
	int getBit(int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength();
	Individual(int len);
	Individual(std::string str);
private:
	std::string copy="";
	int length;
	
};

#endif //INDIVIDUAL_H
