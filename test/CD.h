#pragma once
#include "ShoppingItem.h"

class CD : public IShoppingItem {
private:
	std::string name;
	float price;
public:
	CD(std::string _name = "noname", float _price = 0.0);
	~CD() = default;
	void PrintInfo();
	const float Price() const;
	const std::string Name() const;
};

