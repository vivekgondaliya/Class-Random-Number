/*
	Vivek Gondaia
	vg13@zips.uakron.edu
*/
#include "RationalNumber.h"

RationalNumber RationalNumber::operator+ (RationalNumber num){

	RationalNumber temp = ((numerator * num.denominator) + (denominator * num.numerator)) / (denominator * num.denominator);
	return temp;
}

RationalNumber RationalNumber::operator- (RationalNumber num){

	RationalNumber temp;

	if(numerator < num.numerator){
		temp.numerator = (num.numerator * denominator) - (num.denominator * numerator);
		temp.denominator = (num.denominator * denominator);
	}
	else{
		temp.numerator = (numerator * num.denominator) - (denominator * num.numerator); 
		temp.denominator =(denominator * num.denominator);		
	}

	return simplify(temp);
}

RationalNumber RationalNumber::operator* (RationalNumber num){

	RationalNumber temp;
	temp.numerator = numerator * num.numerator;
	temp.denominator = denominator * num.denominator;
	return simplify(temp);
}

RationalNumber RationalNumber::operator/ (RationalNumber num){

	RationalNumber temp;
	temp.numerator = numerator * num.denominator;
	temp.denominator = denominator * num.numerator;
	return simplify(temp);
}

bool RationalNumber::operator==(const RationalNumber& num1){

	if((numerator * num1.denominator) == (denominator * num1.numerator)){

		return true;
	}
	else
		return false;
}

bool RationalNumber::operator!=(const RationalNumber& num1){

	return !(operator==(num1));
}

bool RationalNumber::operator<(const RationalNumber& num1){

	if((numerator * num1.denominator) < (denominator * num1.numerator)){
		return true;
	}
	else
		return false;
}

bool RationalNumber::operator>(const RationalNumber& num1){

	if((numerator * num1.denominator) > (denominator * num1.numerator)){
		return true;
	}
	else
		return false;
}

bool RationalNumber::operator<=(const RationalNumber& num1){

	if((numerator * num1.denominator) <= (denominator * num1.numerator)){
		return true;
	}
	else
		return false;
}

bool RationalNumber::operator>=(const RationalNumber& num1){

	if((numerator * num1.denominator) >= (denominator * num1.numerator)){
		return true;
	}
	else
		return false;
}