#include <string>

//The first class should represent an item that can be bought in the store.
class Item {
public:
	Item(std::string itemName, long itemId, double itemPrice, int itemStock);
	Item();

private:
	/*
	An item should have a user - friendly name(i.e. "Book") represented as a std::string as well as 
	an id which should be represented as a long value.
	*/
	std::string name;
	long id;
	//Every item should have a price represented as a double as well as an int indicating how many are in stock
	double price;
	int items_in_stock;
};

/*
The second class should represent a store, which contains a list of all the items currently available in the store.
Represent this as an array of Item objects. Assume that there will never be more than 100 objects in the list.
*/
class Store{
public:
	Store(Item firstItem);
	void AddItem(Item addiitonalItem);

private:
	Item store [100];
};

//The third class should represent an order.
class Order {
public:
	Order(Item firstItem);

	/*Provide a member function that allows you to add items to the order, as well as a
	getter function that returns the total price of all the items in the current order.
	*/
	void AddITemToOrder(Item i);
	double ComputeOrderPrice();

private:
	//An order should consist of a list of items.Assume there are never more than 10 items in the order's list
	Item order[10];
};
