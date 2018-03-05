#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string& first, const string&last, const string&ssn)
{
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
}

string Employee::getFirstName()const
{
	return firstName;
}

void Employee::setFirstName(const string& first)
{
	firstName = first;
}

string Employee::getLastName()const
{
	return lastName;
}

void Employee::setLastName(const string& last)
{
	lastName = last;
}

void Employee::setSocialSecurityNumber(const string&ssn)
{
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber()const
{
	return socialSecurityNumber;
}


void Employee::print()const
{
	cout << getFirstName() << " " << getLastName() << " with SSN " << getSocialSecurityNumber();
}


