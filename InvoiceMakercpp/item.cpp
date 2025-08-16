#include "item.h"
//getters
int item::getId() { return id; }
int item::getPrice() { return price; }
std::string item::getType() { return type; }

//setters
void item::setId(int newId) { id = newId; }
void item::setPrice(int newPrice) { price = newPrice; }
void item::setType(std::string newType) { type = newType; }

