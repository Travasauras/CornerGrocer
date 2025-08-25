# CornerGrocer
For class we were prompted to create a simple program that could read in a txt file and count the amount of times a word occurs in the file.  In this case it was for a grocery list.
[Main.cpp](https://github.com/user-attachments/files/21960182/Main.cpp)
[GroceryItem.cpp](https://github.com/user-attachments/files/21960208/GroceryItem.cpp)
#pragma once
#include <string>

class GroceryItem {
public:
	GroceryItem();											// Default constructor
	GroceryItem(const std::string& name);					// Constructor with name only
	GroceryItem(const std::string& name, int quantity);   // Constructor with name and quantity

	std::string getName() const; // Returns the name of the grocery item
	int getQuantity() const;		// Returns the quantity of the grocery item
	void incrementQuantity();



	bool operator<(const GroceryItem& other) const; // Overloaded less than operator for sorting

private:
	std::string name; // Name of the grocery item
	int quantity;		// Quantity of the grocery item, default is 1	
};

