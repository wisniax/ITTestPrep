// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "foreachNarray.h"
#include "fileStream.h"
#include "classes.h"


void execForachNArray()
{
	std::cout << returnFirstArrayAsString() << '\n';
	std::cout << returnSecondArrayAsString() << '\n';

	std::array<char, 6> uselessArray = { 'B','O','O','M','E','R' };
	std::array<int, 6> uselessArrayAleZIntami = { 2,1,3,7,6,9 };
	renderGivenArray(uselessArray);
	renderGivenArray(uselessArrayAleZIntami);
}

//Dynamic memory alloc
void memoryAlloc()
{
	int* arrayX = new int[5];

	delete[] arrayX;
}

void saveAndRead()
{
	std::array<int, 6> uselessArrayAleZIntami = { 2,1,3,7,6,9 };
	saveToFile(uselessArrayAleZIntami, "inty");
	std::cout << readFromFile("inty") << '\n';

	std::array<char, 6> uselessArray = { 'B','O','O','M','E','R' };
	saveToFile(uselessArray, "chary");
	std::cout << readFromFile("chary") << '\n';
}

void classesAreCool()
{
	CSVConverter csvConverter;
	JSONConverter jsonConverter;
	Saver saver;
	//csvConverter.printConvName();
	//jsonConverter.printConvName();

	//cout << csvConverter.getInt() << '\n';

	saver.Save(jsonConverter);
}


int main()
{
	//execForachNArray();

	//saveAndRead();

	classesAreCool();
}
