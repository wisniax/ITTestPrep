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

//Dunamic memory alloc
void memoryAlloc() 
{
	int* arrayX = new int[5];
	delete[] arrayX;
}


int main()
{
	execForachNArray();


}
