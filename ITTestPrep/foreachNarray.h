#pragma once

#include <iostream>
#include <array>

//std::array<char, 5> myCharArray;

std::string returnFirstArrayAsString();

std::string returnSecondArrayAsString();

//Template and pass as reference example also cant be in cpp file??
template <typename T, size_t size>
void renderGivenArray(const std::array<T, size>& givenArray)
{
	for (T x : givenArray)
	{
		std::cout << x;
	}
	std::cout << '\n';
}