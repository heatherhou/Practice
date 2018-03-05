#include "Employee.h"

class HourlyWorker: public Employee
{
public:
	HourlyWorker(const string&, const string&, const string&, double = 0.0, int = 0);

	void setWage(double);
	double getWage()const;

	void setHour(int);
	int getHour()const;

	virtual double earnings()const;
	virtual void print() const;


private:
	int hour;
	double wage;
	

};