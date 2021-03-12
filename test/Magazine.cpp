#include "Magazine.h"

Magazine::Magazine(std::string _name, float _price) : name(_name),  price(_price){
}

void Magazine::PrintInfo() {
	std::cout << "magazine: " << name << ", price " << price << "\n";
}

const float Magazine::Price() const {
	return price;
}

const std::string Magazine::Name() const {
	return name;
}
