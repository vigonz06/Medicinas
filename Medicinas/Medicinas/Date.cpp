#include "Date.h"

std::string showDay(Date d)
{
	std::ostringstream resultado;
	tm ltm;
	localtime_s(&ltm, &d);
	resultado << ltm.tm_mday << '/' << 1 + ltm.tm_mon << '/' << 1900 + ltm.tm_year;

	return resultado.str();
}