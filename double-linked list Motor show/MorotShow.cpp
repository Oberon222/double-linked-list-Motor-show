#include "MorotShow.h"

void MotorShow::Print(string st)
{
	cout << st << endl;
}

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
		if (cars[i].GetGraduationYear() < 2000)
		{
			cars.erase(cars.begin(), cars.begin() + i);
		}
	}
}

void MotorShow::ShowInfo() const
{

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

void MotorShow::Euro_5()
{
	FunctorCountEURO_5 count;

	for (auto element : cars)
	{
		count(element.GetGraduationYear());
	}
}

void MotorShow::SumaPrice()
{
	FunctorSumaCars sc;

	for (auto element : cars)
	{
		sc(element.GetGraduationYear(), element.GetPrice());
	}
}

void MotorShow::Discont()
{
	FunctorDiscont fd;

	for (auto element : cars)
	{
		element.SetPrice(fd(element.GetGraduationYear(), element.GetPrice()));
	}


	/*for (auto element : cars)
	{
		if (2020 - element.GetGraduationYear() > 15)
		{
			element.SetPrice(element.GetPrice() * 0.2);
		}
	}*/
}

void MotorShow::CheckGraduationYear() 
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
		Print("All cars have the correct year of manufacture");

		
	else
		Print("Not all cars have the correct year of manufacture");
}

void MotorShow::CheckCarPrice() 
{
	if (any_of(cars.begin(), cars.end(), ConditionCompareByPrice))
		Print("Car, with a price of 100,000 are available");
	else
		Print("Car, with a price of 100,000 is not available");
}

void MotorShow::CechCarEngineÑapacity() 
{
	if (none_of(cars.begin(), cars.end(), ConditionCompareByEngineCapacity))
	
		Print("Cars with an engine capacity less than 1.0 not found");

	else
	
		Print("A car with an engine capacity of less than 1.0 is available");
}
