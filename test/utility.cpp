#include "utility.h"

void SaveToFile(const std::string filePath, const ShoppingCart* shoppingCart) {

    std::fstream fs;

    fs.open(filePath, std::fstream::out);

    if (fs.is_open()) {
        int amount = shoppingCart->getCart().size();
        for (int i = 0; i < amount; ++i)
            fs << "price " << shoppingCart->getCart()[i]->Price() << ", name" << shoppingCart->getCart()[i]->Name() << "\n";
        fs.close(); 
    }
}
