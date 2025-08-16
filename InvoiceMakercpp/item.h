#pragma once
#include <string>

class item{
private:
	int id;
	std::string type;
	int price;
public:
	item() {}

	int getId();
	std::string getType();
	int getPrice();

	void setId(int newId);
	void setType(std::string newType);
	void setPrice(int newPrice);
};

