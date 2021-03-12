#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "ShoppingCart.h"

void SaveToFile(const std::string filePath, const ShoppingCart* shoppingCart);

