/*
	Vivek Gondaia
	vg13@zips.uakron.edu
*/
#include "RationalNumber.cpp"

int main(){

	//objects
	RationalNumber r1(1,2);	//number1
	RationalNumber r2(1,2);	//number2
	RationalNumber r3 = r1 + r2;	//result
	
	//arithmetic
	//addition
	std::cout<<"ADD RESULT" << std::endl;
	r3.print();
	std::cout<<std::endl;
	//subtract
	r3 = r1 - r2;
	std::cout<<"SUBTRACT RESULT" << std::endl;
	r3.print();
	std::cout<<std::endl;
	//multiply
	r3 = r1 * r2;
	std::cout<<"MULTIPLY RESULT" << std::endl;
	r3.print();
	std::cout<<std::endl;
	//divide
	r3 = r1 / r2;
	std::cout<<"DIVIDE RESULT" << std::endl;
	r3.print();
	std::cout<<std::endl;
	
	bool flag = false; //variable to store result from comparisons

	//Equalilty
	//Equals to
	flag = (r1==r2);
	std::cout <<"Equals to result: " << flag << std::endl;
	//NOT Equals to
	flag = (r1!=r2);
	std::cout <<"Not Equals to result: " << flag << std::endl;
	//less than
	flag = (r1<r2);
	std::cout <<"Less than result: " << flag << std::endl;
	//greater than
	flag = (r1>r2);
	std::cout <<"Greater than result: " << flag << std::endl;
	//less than equal
	flag = (r1<=r2);
	std::cout <<"Less than equal to result: " << flag << std::endl;
	//greater than equal
	flag = (r1>=r2);
	std::cout <<"Greater than equal to result: " << flag << std::endl;

	std::cout<<std::endl;
	
	return 0;
}