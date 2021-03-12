#include "Book.h"

Book::Book(std::string _name, float _price) : name(_name), price(_price) {
}

void Book::PrintInfo() {
	std::cout << "book: " << name << ", price " << price << "\n";
}

const float Book::Price() const {
	return price;
}

const std::string Book::Name() const {
	return name;
}
