# CornerGrocer
For class we were prompted to create a simple program that could read in a txt file and count the amount of times a word occurs in the file.  In this case it was for a grocery list.
[Main.cpp](https://github.com/user-attachments/files/21960182/Main.cpp)
[GroceryItem.cpp](https://github.com/user-attachments/files/21960208/GroceryItem.cpp)
#include "GroceryItem.h"
using namespace std;

GroceryItem::GroceryItem() : name(""), quantity(0) {}		// Default constructor 

GroceryItem::GroceryItem(const string& name) {		// Constructor with name only
	this->name = name;
	this->quantity = 1;
}

GroceryItem::GroceryItem(const string& name, int quantity) {  // Constructor with name and quantity
	this->name = name;
	this->quantity = quantity;
}

string GroceryItem::getName() const {   // Returns the name of the grocery item
	return name;
}


int GroceryItem::getQuantity() const {		// Returns the quantity of the grocery item
	return quantity;
}

void GroceryItem::incrementQuantity() {		// Increments the count of the grocery item for the final list.
	++quantity;
}

bool GroceryItem::operator<(const GroceryItem& other) const {			// Overloaded less than operator for sorting
	return name < other.name;
}
