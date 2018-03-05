#include <iostream>

#include "HourlyWorker.h"
using namespace std;

static const double OverWage = 20;

HourlyWorker::HourlyWorker(const string&first, const string& last, const string&ssn, double wages, int hours)
	:Employee(first, last, ssn)
{
	setWage(wages);
	setHour(hours);
}

void HourlyWorker::setWage(double wages)
{
	if (wages >= 0)
		wage = wages;
}

void HourlyWorker::setHour(int hours)
{
	if (hours >= 0)
		hour = hours;
}

double HourlyWorker::getWage()const
{
	return wage;
}

int HourlyWorker::getHour()const
{
	return hour;
}

double HourlyWorker::earnings()const
{
	if (getHour() <= 40)
		return getHour()*getWage();
	else
		return (40 * getWage() + (getHour() - 40)*OverWage);
}

void HourlyWorker::print()const
{
	cout << "Hourly worker: ";
	Employee::print();
	cout << "\nHour worked: " << getHour()<<endl;
	cout << "Wage per hour: " << getWage() << endl;

}
