#include "MorotShow.h"

void MotorShow::AddCar(Car elem)
{
		cars.push_back(elem);
		cout << "Test" << endl;
}

void MotorShow::DeleteCar(int position)
{
	if (position > cars.size())
	{
		cout << "Such a position does not exist"
			"Position number should not exceed " << cars.size() << endl;
	}

	cars.erase(cars.begin(), cars.begin() + (position - 1));
}

void MotorShow::DeleteCar()
{
	for (int i = 0; i < cars.size(); i++)
	{
		if (cars[i].GetGraduationYear() <= 2000)
		{
			cars.erase(cars.begin(), cars.begin() + i);
		}
	}
}

void MotorShow::ShowInfo() const
{
	/*for (int i = 0; i < cars.size(); i++)
	{
		cars[i].ShowCarInfo();

	}*/

	for (auto element : cars)
	{
		element.ShowCarInfo();
	}
}

void MotorShow::SortByNane()
{
	sort(cars.begin(), cars.end(), CompareByName);
}

void MotorShow::SortByGraduationYear()
{
	sort(cars.begin(), cars.end(), CompareByGraduationYear);
}

void MotorShow::SortByEngineCapacity()
{
	sort(cars.begin(), cars.end(), CompareByEngineCapacity);
}

void MotorShow::SortByPrice()
{
	sort(cars.begin(), cars.end(), CompareByPrice);
}

void MotorShow::SerchByName(string name) const
{
	for (auto element : cars)
	{
		if (element.GetName() == name)
		{
			element.ShowCarInfo();
		}
	}
}

void MotorShow::SerchByGraduationYear(int graduationYear) const
{
	for (auto element : cars)
	{
		if (element.GetGraduationYear() == graduationYear)
		{
			element.ShowCarInfo();
		}
	}
}

void MotorShow::SerchByEngineCapacity(double engineCapacity) const
{
	for (auto element : cars)
	{
		if (element.GetEngineCapacity() == engineCapacity)
		{
			element.ShowCarInfo();
		}
	}
}

void MotorShow::SerchByPrice(int price)
{
	for (auto element : cars)
	{
		if (element.GetPrice() == price)
		{
			element.ShowCarInfo();
		}
	}
}
