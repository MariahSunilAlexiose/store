#include <iostream>
#include <string>
#include "CartItem.h"

using namespace std;

CartItem::CartItem() {
    name = "";
    quantity = 0;
    price = 0;
    id = 0;
}

void CartItem::setCartItem(string n, int q, float p, int i) {
    name = n;
    quantity = q;
    price = p;
    id = i;
}

void CartItem::Display() {
    cout << "\nItems in the cart-";
    cout << "\nItem ID : " << id;
    cout << "\nItem Name : " << name;
    cout << "\nItem Price : Dhs." << price;
    cout << "\nItem Quantity : " << quantity;
    cout << "\n";
}

int CartItem::getID() {
    return id;
}

int CartItem::getQuantity() {
    return quantity;
}

float CartItem::getPrice() {
    return price;
}