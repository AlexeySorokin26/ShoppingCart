#pragma once
#include <iostream>
class IShoppingItem {
private:
	std::string name;
	float price;
public:
	virtual ~IShoppingItem();

	virtual void PrintInfo() = 0;
	virtual const float Price() const = 0;
	virtual const std::string Name() const = 0;
};

