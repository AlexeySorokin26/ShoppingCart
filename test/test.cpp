#include <iostream>
#include "ShoppingCart.h"
#include "utility.h"

int main(int argc, char* argv[]){ 

	std::string pathToFile = "";
	switch (argc) {
	case 2:
		pathToFile = argv[1];
		break;
	default:
		break;
	}
	ShoppingCart *sc = new ShoppingCart();
	Book* b1 = new Book("book1", 100.50);
	Book* b2 = new Book("book2", 10.50);
	Book* b3 = new Book("book3", 1.50);
	sc->addItem(b1);
	sc->addItem(b2);
	sc->addItem(b3);
	std::cout << sc << std::endl;

	std::vector<IShoppingItem*> items;
	items.push_back(b1);
	items.push_back(b2);
	sc->addItems(items);
	
	SaveToFile(pathToFile, sc);

	delete sc;
	delete b1;
	delete b2;
	delete b3;

	return 0;
}


