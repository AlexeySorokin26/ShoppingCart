#pragma once
#include "CD.h"
#include "Book.h"
#include "Magazine.h"
#include "ShoppingItem.h"
#include <vector>
#include <iostream>

class ShoppingCart {
private:
	std::vector<IShoppingItem*> cart;
public:
	ShoppingCart();
	//ShoppingCart(const ShoppingCart& other);
	//ShoppingCart(ShoppingCart&& other)
	~ShoppingCart();
	std::vector<IShoppingItem*> getCart() const;
	float totalPrice();
	void addItem(IShoppingItem* element);
	void addItems(std::vector<IShoppingItem*> elements);
	friend std::ostream& operator<<(std::ostream& cout, const ShoppingCart* shoppingCart);
};

