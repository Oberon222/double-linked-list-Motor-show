#include <iostream>
#include<string>
#include<list>
#include"Car.h"
#include"MorotShow.h"
using namespace std;

int main()
{
	Car c1("Ford",2012,2.3,13000);
	Car c2("BMW", 2015, 2.7, 21000);
	Car c3("Volvo", 2019, 2.4, 18000);
	MotorShow ms;
	ms.AddCar(c1);
	ms.AddCar(c2);
	ms.AddCar(c3);
	ms.ShowInfo();

	system("pause");
	return 0;
}