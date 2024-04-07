#include <iostream>
using namespace std;

struct Fraction {
	int num;
	int den;

	Fraction add(const Fraction& other) const
	{
		Fraction result;
		result.num = num * other.den + other.num * den;
		result.den = den * other.den;
		return result;
	}
	Fraction subtract(const Fraction& other) const
	{
		Fraction result;
		result.num = num * other.den - other.num * den;
		result.den = den * other.den;
		return result;
	}
	Fraction multiply(const Fraction& other) const
	{
		Fraction result;
		result.num = num * other.num;
		result.den = den * other.den;
		return result;
	}
	Fraction divide(const Fraction& other) const
	{
		Fraction result;
		result.num = num * other.den;
		result.den = den * other.num;
		return result;
	}
	void print() const
	{
		cout << num << "/" << den;
	}
};

int main()
{
	
	Fraction A = { 6, 9 };
	Fraction B = {26, 21};
	
    cout << "A + B = ";
	A.add(B).print();
    cout << endl;
	
    cout << "A - B = ";
    A.subtract(B).print();
    cout << endl;
	
    cout << "A * B = ";
    A.multiply(B).print();
    cout << endl;
	
    cout << "A / B = ";
    A.divide(B).print();
    cout << endl;
}