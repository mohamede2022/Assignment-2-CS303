
#pragma once
#include <iostream>
using namespace std;
// base class
class Employee {
public:
	virtual double salary() = 0;
	virtual double healthCost() = 0;
	virtual double vacationDays() = 0;
};

// derived classes
class Professional : 
	public Employee {
private:
	double monthlySalary;
	int yearlyVacationDays;

public:
	Professional();
	double salary();
	double healthCost();
	double vacationDays();
};

// derived classes
class Nonprofessional : 
public Employee {
private:
	double hourlyRate = 18.0;
	double hoursWorked;

public:
	Nonprofessional(double hours);
	double salary();
	double healthCost();
	double vacationDays();
};


