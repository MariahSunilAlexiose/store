#pragma once
#include "Item.h"

class StoreManager {
public:
    Item items[50];        // Array to store items in the shop
    int customID;          // Variable to store the custom ID of the shop
    int numberOfItems;     // Variable to store the number of items in the shop
    Item sortedStack[50];  // Array to store items in a sorted stack
    int top;               // Variable to track the top of the stack

    /* Default constructor */
    StoreManager();

    /* returnItemByIndex returns an item by its index
    * @param i the index of the item
    * @return the item at the specified index
    */
    Item returnItemByIndex(int i);

    /* DisplaySortByPrice displays items sorted by price */
    void DisplaySortByPrice();

    /* DisplaySortByID displays items sorted by ID */
    void DisplaySortByID();

    /* DisplaySortByName displays items sorted by name */
    void DisplaySortByName();

    /* pushToStack pushes an item onto the stack
    * @param i the item to be pushed
    */
    void pushToStack(Item i);

    /* printStack prints the items in the stack */
    void printStack();

    /* popStack pops an item from the stack
    * @param i the item to be popped
    */
    void popStack(Item i);

    /* addItem adds a new item to the shop */
    void addItem();

    /* deleteItem deletes an item from the shop */
    void deleteItem();

    /* modifyItem modifies the details of an item in the shop */
    void modifyItem();

    /* DisplayItems displays all items in the shop */
    void DisplayItems();

    /* getItemCount returns the number of items in the shop
    * @return the number of items
    */
    int getItemCount();
};

