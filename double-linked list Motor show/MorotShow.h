#pragma once
#include <iostream>
#include<string>
#include<list>
#include"Car.h"
using namespace std;

class MotorShow
{
	list< Car> cars;

public:

	MotorShow() { }

	void AddCar(Car elem)
	{
		cars.push_back(elem);
	}

	

	void DeleteCar()
	{
		for ()
		{
			
		}
		
	}

	void ShowInfo()const
	{
		for()
	}

	void SortByNane()
	{
		cars.sort(CompareCarByName);
		for (Car c : cars)
		{
			c.ShowCarInfo();
		}
	}

	void SortByGraduationYear()
	{
		cars.sort(CompareCarByGraduationYear);
		for (Car c : cars)
		{
			c.ShowCarInfo();
		}
	}

	void SortByEngineCapacity()
	{
		cars.sort(CompareCarByEngineCapacity);
		for (Car c : cars)
		{
			c.ShowCarInfo();
		}
	}

	void SortByPrice()
	{
		cars.sort(CompareCarByPrice);
		for (Car c : cars)
		{
			c.ShowCarInfo();
		}
	}

	void SerchByName(string name)const
	{
		
		for (auto iter = cars.begin(); iter != cars.end(); ++iter)
		{
			
		}
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

	
	bool CompareCarByName(const Car& c1, const Car& c2)
	{
		return c1.GetName() < c2.GetName();
	}

	bool CompareCarByGraduationYear(const Car& c1, const Car& c2)
	{
		return c1.GetGraduationYear() < c2.GetGraduationYear();
	}

	bool CompareCarByEngineCapacity(const Car& c1, const Car& c2)
	{
		return c1.GetEngineCapacity() < c2.GetEngineCapacity();
	}

	bool CompareCarByPrice(const Car& c1, const Car& c2)
	{
		return c1.GetPrice() < c2.GetPrice();
	}

};
