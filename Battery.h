#pragma once
#include <iostream>
#include <vector>

class Battery
{
protected:
	int C1;
	int C2;
public:
	Battery(const int& first, const int& second);
	virtual double CountCapacity() const = 0;
	virtual void PrintInfo() const = 0;
};