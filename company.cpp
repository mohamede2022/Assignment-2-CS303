
#include "company.h"

// Professional 
Professional::Professional() {
	monthlySalary = 5000.0;
	yearlyVacationDays = 11;
}

// Weekly Salary 
double Professional::salary() { 
	return monthlySalary / 2.0; 
}

// Healthcare
double Professional::healthCost() { 
	return (monthlySalary / 2.0) * 0.05;
}

// Vacation Days
double Professional::vacationDays() { 
	return yearlyVacationDays - 10; 
}


// Nonprofessional 
Nonprofessional::Nonprofessional(double hours) { 
	hoursWorked = hours; 
}

// Weekly Salary
double Nonprofessional::salary() { 
	return (hourlyRate * hoursWorked); 
}
// Vacation Time 
double Nonprofessional::vacationDays() { 
	return (hoursWorked * 0.5 / 20); 
}
// Healthcare
double Nonprofessional::healthCost() {
	return (hourlyRate * hoursWorked) * 0.2;
}

