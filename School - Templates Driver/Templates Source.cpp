//Name: Alexandra Smith
//Class: CIS 1202.501
//Project Name: Templates Driver
//Project Desciption: This is a driver for testing the usage of function templates
//Date: 12/06/2024


#include<iostream>

using namespace std;

template <typename T> //Template for the half function that accepts all non-int parameters
T half(T num)
{
	return num / 2;

}

int half(int num) //Explicitly defined half function for int parameters
{
	float floatNum = static_cast<float>(num);
	floatNum /= 2;

	float roundedNum = round(floatNum);

	return roundedNum;
}

int main()
{

	double a = 8.0; //Trio of variables for the half functions to half
	float b = 6.7;
	int c = 9;

	cout << half(a) << endl; //Prints the results
	cout << half(b) << endl;
	cout << half(c) << endl;



	system("pause");
	return 0;
}