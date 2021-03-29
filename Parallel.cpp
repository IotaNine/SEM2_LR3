#include "Parallel.h"

double Parallel::CountCapacity() const
{
	return (C1 + C2);
}
void Parallel::PrintInfo() const
{
	std::cout << "Parallel battery" << std::endl;
	std::cout << "C1 capacity: " << C1 << std::endl;
	std::cout << "C2 capacity: " << C2 << std::endl;
}