#pragma once
#include "ShoppingItem.h"

class Book : public IShoppingItem {
private:
	std::string name;
	float price;
public:
	Book(std::string _name = "noname", float _price = 0.0);
	~Book() = default;
	void PrintInfo();
	const float Price() const;
	const std::string Name() const;
};

