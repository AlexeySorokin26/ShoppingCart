#pragma once
#include "ShoppingItem.h"

class Magazine : public IShoppingItem {
private:
	std::string name;
	float price;
public:
	Magazine(std::string _name = "noname", float _price = 0.0);
	~Magazine() = default;
	void PrintInfo();
	const float Price() const;
	const std::string Name() const;
};

