#pragma once
#include<iostream>
using namespace std;

class FunctorSumaCars
{
	int sumaPriceCars = 0;
public:

	int operator ()(int valueGraduationYear, int valuePrice)
	{
		if (2020 - valueGraduationYear < 5)
		{

			sumaPriceCars += valuePrice;
		}
		return sumaPriceCars;
	}
};

class FunctorCountEURO_5
{
	int countEuro5 = 0;
public:

	int operator ()(int value)
	{
		if (value >= 2016)
		{
			countEuro5++;
		}
		
	}
};

class FunctorDiscont
{
	
public:

	int operator ()(int valueGraduationYear, int valuePrice)
	{
		if (2020 - valueGraduationYear > 15)
		{
			return  valuePrice * 0.2;
		}

		return 0;
	}
};
