#pragma once
#include "Battery.h"

class Parallel : public Battery
{
public:
	Parallel(const int& first, const int& second) : Battery(first, second) {}
	double CountCapacity() const override;
	void PrintInfo() const override;
};