#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item {
    int id;
    string name;
    float price;
    int quantity;
public:
    /* Default constructor */
    Item();

    /* setValues sets the item values
    * @param i the unique identifier of the item */
    void setValues(int i);

    /* Display prints the details of the item */
    void Display();

    /* modify modifies the item details */
    void modify();

    /* getID returns the item ID
    * @return the unique identifier of the item */
    int getID();

    /* getPrice returns the item price
    * @return the price of the item */
    float getPrice();

    /* getQuantity returns the item quantity
    * @return the quantity of the item */
    int getQuantity();

    /* modifyQuantity modifies the item quantity
    * @param q the new quantity of the item */
    void modifyQuantity(int q);

    /* getName returns the item name
    * @return the name of the item */
    string getName();
};