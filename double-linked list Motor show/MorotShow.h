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

	int Euro_5(); // зробити повернення методу

	void SumaPrice(); //  cars under 5 years // зробити повернення методу

	void Discont();

	void CheckGraduationYear()
	{
		/*auto is_Correct_year_Graduation = [](int elem) {return (elem > 2000); };

		for (auto element : cars)
		{
			if (all_of(cars.begin(), cars.end(), is_Correct_year_Graduation(element.GetGraduationYear())))
				cout << "All cars have the correct year of manufacture" << endl;
			else
				cout << "Not all cars have the correct year of manufacture" << endl;
		}*/
		if (all_of(cars.begin(), cars.end(), ConditionCompareByGraduationYear))
			cout << "All cars have the correct year of manufacture" << endl;
		else
			cout << "Not all cars have the correct year of manufacture" << endl;

	}

	void CheckCarPrice()
	{
		if (any_of(cars.begin(), cars.end(), ConditionCompareByPrice))
			cout << "Car, with a price of 100,000 are available" << endl;
		else
			cout << "car, with a price of 100,000 is not available" << endl;
	}

	void CechCarEngineСapacity()
	{

		if (none_of(cars.begin(), cars.end(), ConditionCompareByEngineCapacity))
		{
			cout << "cars with an engine capacity less than 1.0 not found" << endl;
		}

		else
		{
			cout << "a car with an engine capacity of less than 1.0 is available" << endl;
		}
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

