#include "Sequential.h"

double Sequential::CountCapacity() const
{
	return static_cast<double>(C1 * C2) / (C1 + C2);
}
void Sequential::PrintInfo() const
{
	std::cout << "Sequential battery" << std::endl;
	std::cout << "C1 capacity: " << C1 << std::endl;
	std::cout << "C2 capacity: " << C2 << std::endl;
}