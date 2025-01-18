#pragma once
#include <iostream>
#include <string>

using namespace std;

class CartItem {
    string name;
    int quantity;
    float price;
    int id;

public:
    /* Default constructor */
    CartItem();

    /* setCartItem sets the details of the cart item
    * @param n the name of the item
    * @param q the quantity of the item
    * @param p the price of the item
    * @param i the unique identifier of the item */
    void setCartItem(string n, int q, float p, int i);

    /* Display prints the details of the cart item */
    void Display();

    /* getID returns the item ID
    * @return the unique identifier of the item */
    int getID();

    /* getQuantity returns the item quantity
    * @return the quantity of the item */
    int getQuantity();

    /* getPrice returns the item price
    * @return the price of the item */
    float getPrice();
};