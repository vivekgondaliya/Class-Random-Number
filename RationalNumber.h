/*
	Vivek Gondaia
	vg13@zips.uakron.edu
*/

#ifndef __RATIONALNUMBER_H_INCLUDED__
#define __RATIONALNUMBER_H_INCLUDED__

#include <iostream>

class RationalNumber{
	
private:
	//data members
	int numerator;
	int denominator;

public:
	//constructors
	RationalNumber():numerator(0), denominator(1){};
	RationalNumber(int num):numerator(num), denominator(1){};
	RationalNumber(int num, int den): numerator(num) , denominator(den){};
	RationalNumber(const RationalNumber& obj): numerator(obj.numerator), denominator(obj.denominator) {};
	
	//destructor
	~RationalNumber(){};

	//accessors
	int getNumerator(){return numerator;}
	int getDenominator(){return denominator;}

	//print rational number
	void print(){
		std::cout << "Numerator: " << numerator << std::endl;
		std::cout << "Denominator: " << denominator << std::endl;
		std::cout << std::endl;
	}
	
	//simplify
	RationalNumber simplify(RationalNumber rational){
     
     	int x=rational.getNumerator();
     	int y=rational.getDenominator();
     	int z;
     	while (y!=0)
     	{
           z=x%y;
           x=y;
           y=z;
     	}
     	
     	int finalNumerator=rational.getNumerator()/x;
     	int finalDenominator=rational.getDenominator()/x;
     	RationalNumber temp (finalNumerator,finalDenominator);
     	return temp;
	}

	//arithmetic operators
	RationalNumber operator+ (RationalNumber);
	RationalNumber operator- (RationalNumber);
	RationalNumber operator* (RationalNumber);
	RationalNumber operator/ (RationalNumber);

	//comparison operators
	bool operator ==(const RationalNumber& num);
	bool operator !=(const RationalNumber& num);
	bool operator <(const RationalNumber& num);
	bool operator >(const RationalNumber& num);
	bool operator <=(const RationalNumber& num);
	bool operator >=(const RationalNumber& num);

};	

#endif