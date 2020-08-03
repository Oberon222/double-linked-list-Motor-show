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

	void Print(string st);

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

	void Euro_5(); // зробити повернення методу

	void SumaPrice(); //  cars under 5 years // зробити повернення методу

	void Discont();

	void CheckGraduationYear(); 

	void CheckCarPrice();

	void CechCarEngineСapacity() ;
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


bool ConditionCompareByGraduationYear(const Car c1)
{
	return c1.GetGraduationYear() > 2000;
}

bool ConditionCompareByPrice(const Car c1)
{
	return c1.GetPrice() > 100000;
}

bool ConditionCompareByEngineCapacity(const Car c1)
{
	return c1.GetEngineCapacity() < 1.0;
}

