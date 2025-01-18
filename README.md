# Store Management System

## Overview

This is a Store Management System implemented in C++. The system allows the user to manage a store's inventory and handle customer transactions.

## Class Descriptions
### Item
- **Purpose:** Represents an item in the store's inventory.
- **Key Functions:**
    - setValues(int i) - Sets the item's attributes like ID, name, price, and quantity
    - Display() - Prints the details of the item
    - modify() - Modifies the details of the item.
    - getID() - Returns the item's ID.
    - getPrice() - Returns the item's price
    - getQuantity() - Returns the item's quantity.
    - modifyQuantity(int q) - Modifies the item's quantity
    - getName() - Returns the item's name.

### CartItem
- **Purpose:** Represents an item in a customer's shopping cart
- **Key Functions:**
    - setCartItem(string n, int q, float p, int i) - Sets the cart item's attributes like name, quantity, price, and ID
    - Display() - Prints the details of the cart item
    - getID() - Returns the cart item's ID
    - getQuantity() - Returns the cart item's quantity
    - getPrice() - Returns the cart item's price.

### Store
- **Purpose:** Manages the inventory and operations of the store.
- **Key Functions:**
    - addItem() - Adds a new item to the store's inventory
    - deleteItem() - Deletes an item from the inventory based on its ID
    - modifyItem() - Modifies the details of an existing item
    - DisplayItems() - Displays all items currently in the inventory
    - getItemCount() - Returns the number of items in the inventory
    - DisplaySortByPrice() - Displays items sorted by price
    - DisplaySortByID() - Displays items sorted by ID
    - DisplaySortByName() - Displays items sorted by name
    - pushToStack(Item i) - Pushes an item onto a stack
    - printStack() - Prints all items in the stack
    - popStack(Item i) - Pops an item from the stack.

## Function Descriptions
### MaintenanceSwitch
- **Purpose:** Toggles the maintenance mode of the store and provides various inventory management options
- **Key Functions:** Provides options for adding, deleting, modifying, and displaying items in the inventory.

### TransactionSwitch
- **Purpose:** Handles transactions in the store, providing a seamless customer experience.
- **Key Functions:** Provides options for adding items to the cart, removing items from the cart, displaying the cart, and printing the bill for items.