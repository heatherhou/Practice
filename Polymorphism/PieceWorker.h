#include "Employee.h"

class PieceWorker : public Employee
{
public:
	PieceWorker(const string&, const string&, const string&, double = 0.0, int = 0);

	void setWagePiece(double);
	double getWagePiece()const;

	void setPiece(int);
	int getPiece()const;

	virtual double earnings() const;
	virtual void print()const;

private:
	int pieces;
	double wage;

};