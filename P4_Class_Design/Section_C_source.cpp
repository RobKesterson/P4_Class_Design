#include "Section_C_header.h"

Item::Item(std::string itemName, long itemId, double itemPrice, int itemStock) 
{
	name = itemName;
	id = itemId;
	price = itemPrice;
	items_in_stock = itemStock;	
}

Item::Item()
{

}

Store::Store(Item firstItem)
{
	store[0] = firstItem;
}
void Store::AddItem(Item addiitonalItem)
{
	int listCounter = 0;
	//while (store[listCounter])
}

Order::Order(Item firstItem)
{
	order[0] = firstItem;
}
void Order::AddITemToOrder(Item newItem)
{
	
}
double Order::ComputeOrderPrice()
{
	double totalPrice = 0.0;

	return totalPrice;
}