#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
}

ShoppingCart::~ShoppingCart() {
}

std::vector<IShoppingItem*> ShoppingCart::getCart() const {
	return cart;
}

float ShoppingCart::totalPrice() {
	float totalPrice = 0.0;
	int amount = cart.size();
	for (int i = 0; i < amount; ++i)
		totalPrice += cart[i]->Price();
	return totalPrice;
}

void ShoppingCart::addItem(IShoppingItem* element) {
	cart.push_back(element);
}

void ShoppingCart::addItems(std::vector<IShoppingItem*> elements) {
	for (auto& el : elements)
		cart.push_back(el);
}

std::ostream& operator<<(std::ostream& cout, const ShoppingCart* shoppingCart) {

	int amount = shoppingCart->cart.size();
	for(int i = 0; i < amount; ++i)
		shoppingCart->cart[i]->PrintInfo();

	return cout;
}
