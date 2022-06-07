#include "foreachNarray.h"
#include <string>

std::array<char, 5> myCharArray = { 'B', '<', 'u', '=', 'o' };
std::array<std::array<char, 5>, 5> mySecondCharArray =
{{
	{'J', 'D', '&', '6', '9' },
	{'=', '2', '1', '3', '7' },
	{'H', 'E', 'H', 'E', 'H' },
	{'H', 'a', 'G', 'A', 'Y' },
	{'B', 'O', 'O', 'M', 'E' }
}};

std::string returnFirstArrayAsString()
{
	std::string str = "";
	for (char ch : myCharArray)
	{
		str += ch;
	}
	return str;
}

std::string returnSecondArrayAsString()
{
	std::string str = "";
	for (auto arr : mySecondCharArray)
	{
		for (auto ch : arr)
		{
			str += ch;
		}
	}
	return str;
}
