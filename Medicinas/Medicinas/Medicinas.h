#ifndef LISTAMEDICINAS
#define LISTAMEDICINAS

#include "Medicina.h"
#include <fstream>
#include <vector>

struct Medicinas
{
	std::vector<Medicina> lista;

	bool load()
	{
		std::ifstream file;
		Medicina nueva;
		int n;

		file.open("Medicinas.txt");

		if (file.is_open())
		{
			file >> n;

			for (int i = 0; i < n; i++)
			{
				if (nueva.load(file)) lista.push_back(nueva);

				else return false;
			}
			return true;
		}
		else return false;
	}

	void save()
	{
		std::ofstream file;
		
		file.open("Medicinas.txt");

		file << lista.size();

		for (auto i: lista)
		{
			i.save(file);
		}
	}
};

#endif