#pragma once
#include <iostream>
#include<string>
#include<list>
using namespace std;

class Car
{
	string name;
	int graduationYear;   // �� �������
	double engineCapacity; // ��'�� �������
	int price; // ����
public:
	Car() : name(" "), graduationYear(0), engineCapacity(0.0), price(0) { }

	Car(string name, int graduationYear, double engineCapacity, int price) : name(name), graduationYear(graduationYear), engineCapacity(engineCapacity), price(price)
	{ }

	string GetName()const
	{
		return name;
	}

	int GetGraduationYear()const
	{
		return graduationYear;
	}

	double GetEngineCapacity()const
	{
		return engineCapacity;
	}

	int GetPrice()const
	{
		return price;
	}

	void SetPrice(int price)
	{
		this->price = price;
	}

	void ShowCarInfo()const
	{
		cout << "Car name: " << name << endl;
		cout << "Graduation year: " << graduationYear << endl;
		cout << "Engine capacity: " << engineCapacity << endl;
		cout << "Price: " << price << endl;
	}

};
