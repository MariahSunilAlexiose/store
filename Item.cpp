#include "Item.h"

Item::Item() {
    id = 1;
    name = "";
    price = 0;
    quantity = 0;
}

void Item::setValues(int i) {
    id = i;
    cout << "\nEnter Item Name: ";
    cin >> name;
    cout << "\nEnter Item Price: $";
    cin >> price;
    cout << "\nEnter Item Quantity: ";
    cin >> quantity;
}

void Item::Display() {
    cout << "\nItem ID: " << id;
    cout << "\nItem Name: " << name;
    cout << "\nItem Price: $" << price;
    cout << "\nItem Quantity: " << quantity;
    cout << "\n";
}

void Item::modify() {
    cout << "\nEnter New Item Name: ";
    cin >> name;
    cout << "\nEnter New Item Price: $";
    cin >> price;
    cout << "\nEnter New Item Quantity: ";
    cin >> quantity;
    cout << "\nItem Details Modified!";
}

int Item::getID() {
    return id;
}

float Item::getPrice() {
    return price;
}

int Item::getQuantity() {
    return quantity;
}

void Item::modifyQuantity(int q) {
    quantity -= q;
}

string Item::getName() {
    return name;
}