#include "classes.h"

Converter::Converter()
{
	someInt = 420;
}

//Setter

void Converter::setInt(int i)
{
	someInt = i;
}

//Getter

int Converter::getInt()
{
	return someInt;
}

void CSVConverter::Convert(string path)
{
	cout << "Converting CSV file..." << endl;
}

void JSONConverter::Convert(string path)
{
	cout << "Converting JSON file..." << endl;
}

