#ifndef MEDICINA
#define MEDICINA

#include <string>
#include <fstream>

struct Medicina
{
	std::string id;
	int cuantas;
	int gastos;

	bool load(std::ifstream &file)
	{
		file >> id;

		if (!file.fail())
		{
			file >> cuantas;

			if (!file.fail())
			{
				file >> gastos;

				if (!file.fail()) return true;

				else return false;
			}
			else return false;
		}
		else return false;
	}

	void save(std::ofstream &file)
	{
		file << id << " " << cuantas << " " << gastos << std::endl;
	}
};

#endif