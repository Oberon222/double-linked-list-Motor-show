#pragma once
#include <iostream>
#include<string>
#include<vector>
#include"Car.h"
#include<algorithm>
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

	

	void DeleteCar(int position)
	{
		if (position > cars.size())
		{
			cout << "Such a position does not exist"
				"Position number should not exceed " << cars.size() << endl;
		}
		
		cars.erase(cars.begin(), cars.begin() + (position - 1));

	}

	void DeleteCar()
	{
		/*cars.erase(remove_if(cars.begin(), cars.end(), [](auto& value) {return value = 2000; }), cars.end());*/

		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].GetGraduationYear() == 2000)
			{
				cars.erase(cars.begin(), cars.begin() + i);
				
			}
		}
	
	}

	void ShowInfo()const
	{
		for (int i = 0; i < cars.size(); i++)
		{
			cars[i].ShowCarInfo();
		
		}
	}

	void SortByNane()
	{
		/*sort(cars.begin(), cars.end());*/

			for (int i = 0; i < cars.size(); i++)
			{
				sort(cars.begin()[i].GetName(), cars.end()[i].GetName());

			}

	}

	void SortByGraduationYear()
	{
		for (int i = 0; i < cars.size()-1; i++)
		{
			for (int j = 0; j < cars.size()-1; j++)
			{
				if (cars[j].GetGraduationYear() > cars[j + 1].GetGraduationYear())
				{
					Car tmp = cars[j];
					cars[j] = cars[j + 1];
					cars[j + 1] = tmp;
				}
			}
		}
	}

	void SortByEngineCapacity()
	{
		for (int i = 0; i < cars.size(); i++)
		{
			sort(cars.begin()[i].GetEngineCapacity(), cars.end()[i].GetEngineCapacity());
		}
	}

	void SortByPrice()
	{
		
	}

	void SerchByName(string name)const
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].GetName() == name)
			{
				cars[i].ShowCarInfo();

			}

		}
		
	}

	void SerchByGraduationYear(int graduationYear)const
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].GetGraduationYear() == graduationYear)
			{
				cars[i].ShowCarInfo();
			}
		}
	}
	void SerchByEngineCapacity(double engineCapacity)const
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].GetEngineCapacity() == engineCapacity)
			{
				cars[i].ShowCarInfo();
			}
		}
	}

	void SerchByPrice(int price)
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if (cars[i].GetPrice() == price)
			{
				cars[i].ShowCarInfo();
			}
		}

	}

	void Euro_5()
	{
		int countEuro_5=0;
		countEuro_5=count_if(cars.begin(),cars.end(),[] (int myYear){return }

	}
	
	void SumaPrice() //  загальна вартість машин, вік яких менше 5 років
	{
		int sumPrice=0;
		for (int i = 0; i < cars.size(); i++)
		{
			if ((2020 - cars[i].GetGraduationYear()) < 5)
			{
				sumPrice += cars[i].GetPrice();
			}
		}
	}
	
	void Discont()
	{
		for (int i = 0; i < cars.size(); i++)
		{
			if ((2020 - cars[i].GetGraduationYear()) > 15)
			{
				cars[i].SetPrice(cars[i].GetPrice() * 0.2);
			}
		}
	}



};
