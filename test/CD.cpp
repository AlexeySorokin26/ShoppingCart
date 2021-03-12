#include "CD.h"

CD::CD(std::string _name, float _price) : name(_name), price(_price) {
}

void CD::PrintInfo() {
	std::cout << "cd: " << name << ", price " << price << "\n";
}

const float CD::Price() const {
	return price;
}

const std::string CD::Name() const {
	return name;
}
