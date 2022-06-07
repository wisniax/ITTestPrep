#pragma once
#include <fstream>
#include <string>
#include <array>

template <typename T, size_t size>
void saveToFile(const std::array<T, size>& x, std::string fileName)
{
	std::fstream file;
	std::string information = "myInfo";
	file.open(fileName + ".txt", std::ios::out); //std::ios::out|std::ios:app to append
	for (auto& y : x)
	{
		file << y << '\n';
	}
	file.close();
}

template <typename T, size_t size>
void appendToFile(const std::array<T, size>& x, std::string fileName)
{
	std::fstream file;
	std::string information = "myInfo";
	file.open(fileName + ".txt", std::ios::out | std::ios:app); //std::ios::out|std::ios:app to append
	for (auto& y : x)
	{
		file << y << '\n';
	}
	file.close();
}


std::string readFromFile(std::string fileName)
{

	std::fstream file;
	std::string str = "";
	file.open(fileName + ".txt", std::ios::in);
	for (std::string line; std::getline(file, line); )
	{
		str.append(line + '\t');
	}
	file.close();
	return str;
}