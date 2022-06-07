#pragma once
#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Converter
{
public:
	//Class constructor
	Converter();

	//Pure virtual class (= 0) --> MUST BE REDEFINED
	virtual void Convert(string path) = 0;

	//Virtual class --> CAN BE REDEFINED
	virtual void printConvName() 
	{
		cout << "Converter" << '\n';
	}

	//Setter
	void setInt(int i);

	//Getter
	int getInt();

private:
	int someInt;
};



//Concrete converters
class CSVConverter : public Converter
{
public:
	void Convert(string path);
	//printConvName funct is NOT redefined here

	void printSmth() 
	{
		cout << "something" << '\n';
	}
};

class JSONConverter : public Converter
{
public:
	void Convert(string path);

	//printConvName funct is redefined here
	void printConvName() 
	{
		cout << "JSONConverter" << '\n';
	}
};



//class that is used by application
class Saver
{
public:
	void Save(Converter& converter)
	{
		converter.printConvName();
		cout << "was saved." << '\n';
	}
};
