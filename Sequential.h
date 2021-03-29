#pragma once
#include "Battery.h"

class Sequential: public Battery
{
public:
	Sequential(const int& first, const int& second) : Battery(first, second) {}
	double CountCapacity() const override;
	void PrintInfo() const override;
};