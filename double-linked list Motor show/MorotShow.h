#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Car.h"
#include<algorithm>
#include"Functors.h"
using namespace std;



class MotorShow
{
	vector< Car> cars;

public:

	MotorShow() { }

	void AddCar(Car elem);

	void DeleteCar(int position);

	void DeleteCar();

	void ShowInfo()const;

	void SortByNane();

	void SortByGraduationYear();

	void SortByEngineCapacity();

	void SortByPrice();

	void SerchByName(string name)const;

	void SerchByGraduationYear(int graduationYear)const;

	void SerchByEngineCapacity(double engineCapacity)const;

	void SerchByPrice(int price);

	void Euro_5() // зробити повернення методу
	{
		FunctorCountEURO_5 count;

		for (auto element : cars)
		{
			count(element.GetGraduationYear());
		}
	}

	void SumaPrice() //  cars under 5 years // зробити повернення методу
	{
		FunctorSumaCars sc;

		for (auto element : cars)
		{
			sc(element.GetGraduationYear(), element.GetPrice());
		}

		
	}
	
	void Discont()
	{
		FunctorDiscont fd;

		for (auto element : cars)
		{
			fd(element.GetGraduationYear(), element.GetPrice());
		}
	}

	void CheckGraduationYear()
	{

	}

	void CheckCarPrice()
	{

	}

	void CechCarEngineСapacity()
	{

	}
};


bool CompareByName(const Car c1, const Car c2)
{
	return c1.GetName() > c2.GetName();
}

bool CompareByGraduationYear(const Car c1, const Car c2)
{
	return c1.GetGraduationYear() > c2.GetGraduationYear();
}

bool CompareByEngineCapacity(const Car c1, const Car c2)
{
	return c1.GetEngineCapacity() > c2.GetEngineCapacity();
}

bool CompareByPrice(const Car c1, const Car c2)
{
	return c1.GetPrice() > c2.GetPrice();
}



