#include <iostream>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string& first, const string&last, const string&ssn,double wageNOW, int piece)
	:Employee(first, last, ssn)
{
	setPiece(piece);
	setWagePiece(wageNOW);
}

void PieceWorker::setWagePiece(double wagePiece)
{
	if (wagePiece >= 0)
		wage = wagePiece;
}
double  PieceWorker::getWagePiece()const
{
	return wage;
}

void PieceWorker::setPiece(int number)
{
	if (number>=0)
		pieces = number;
}

int PieceWorker::getPiece()const
{
	return pieces;
}

double PieceWorker::earnings()const
{
	return getPiece() * getWagePiece();
};

void PieceWorker::print()const
{
	cout << "Piece worker: ";
	Employee::print();
	cout << "\nPieces made: " << getPiece() << endl;
	cout << "Piece wage: " << getWagePiece() << endl;
}
