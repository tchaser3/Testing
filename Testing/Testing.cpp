// Testing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>>
#include <string>
using namespace std;

int AddingNumbers(long long int intFirstNumber, long long int intSecondNumber)
{
	long long int intTotalNumber;

	intTotalNumber = intFirstNumber * intSecondNumber;

	return intTotalNumber;
}
int main()
{
	long long int intSecondNumber = 2;
	long long int intTotalNumber = 2;
	string strTotalNumber;
	int intCounter;

	for (intCounter = 0; intCounter <= 30; intCounter++)
	{
		intTotalNumber = AddingNumbers(intTotalNumber, intSecondNumber);

		strTotalNumber = to_string(intTotalNumber) + "\n";

		std::cout << strTotalNumber;
	}



    return 0;
}


