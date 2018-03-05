#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"

using namespace std;

void virtualViaPointer(const Employee *const);


int main()
{
	cout << fixed << setprecision(2);
	HourlyWorker hourlyWorker("Allen", "He", "123-45-7890", 12.5, 45);
	PieceWorker pieceWorker("Bob", "Ba", "987-65-4321", 4, 75);

	cout << "Employees processed individually using static binding\n\n";
	hourlyWorker.print();
	cout << "\nearned $" << hourlyWorker.earnings() << endl << endl;
	pieceWorker.print();
	cout << "\nearned $" << pieceWorker.earnings() << endl << endl;

	vector <Employee *> employees(2); 
	employees[1] = &hourlyWorker;
	employees[0] = &pieceWorker;

	cout << "Virtual function calls made off base-class pointers:\n\n";
	for (size_t i = 0; i < employees.size(); ++i)
		virtualViaPointer(employees[i]);

	
}
void virtualViaPointer(const Employee* const basePtr)
{
	basePtr->print();
	cout << "\nearned $" << basePtr->earnings() << "\n\n";
}