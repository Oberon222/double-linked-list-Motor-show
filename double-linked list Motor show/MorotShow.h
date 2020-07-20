#pragma once
#include <iostream>
#include<string>
#include<list>
#include"Car.h"
#include<vector>
using namespace std;

class MotorShow
{
	vector< Car> cars;

public:

	MotorShow() { }

	void AddCar(Car elem)
	{
		cars.push_back(elem);
	}

	

	void DeleteCar()
	{
		for (int i=0;i<cars.size();i++)
		{
			if (cars[i].GetGraduationYear() == 2000)
			{
				cars.erase(cars.begin()+i);
			}
		}
		
	}

	void ShowInfo()const
	{
		for()
	}

	void SortByNane()
	{
		
	}

	void SortByGraduationYear()
	{
		
	}

	void SortByEngineCapacity()
	{
		
	}

	void SortByPrice()
	{
		
	}

	void SerchByName(string name)const
	{
		
		
	}

	void SerchByGraduationYear(int graduationYear)const
	{

	}
	void SerchByEngineCapacity(double engineCapacity)const
	{

	}

	void SerchByPrice(int price)
	{


	}

	
	

};
