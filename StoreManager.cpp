#include "StoreManager.h"

StoreManager::StoreManager() {
    customID = 1;
    numberOfItems = 0;
    top = -1;
}

Item StoreManager::returnItemByIndex(int i) {
    return items[i];
}

void StoreManager::DisplaySortByPrice() {
    top = -1;
    Item tempItems[50];
    int tempNumberOfItems = numberOfItems;
    int i, j, k;
    float maxPrice = 0;
    int maxIndex;
    for (i = 0; i < numberOfItems; i++)
        tempItems[i] = items[i];
    for (i = 0; i < numberOfItems; i++) {
        for (j = 0; j < tempNumberOfItems; j++) {
            if (maxPrice < tempItems[j].getPrice()) {
                maxPrice = tempItems[j].getPrice();
                maxIndex = j;
            }
        }
        pushToStack(tempItems[maxIndex]);
        maxPrice = 0;
        for (k = maxIndex; k < tempNumberOfItems; k++)
            tempItems[k] = tempItems[k + 1];
        tempNumberOfItems--;
    }
}

void StoreManager::DisplaySortByID() {
    top = -1;
    Item tempItems[50];
    int tempNumberOfItems = numberOfItems;
    int i, j, k;
    int maxID = 0, maxIndex;
    for (i = 0; i < numberOfItems; i++)
        tempItems[i] = items[i];
    for (i = 0; i < numberOfItems; i++) {
        for (j = 0; j < tempNumberOfItems; j++) {
            if (maxID < tempItems[j].getID()) {
                maxID = tempItems[j].getID();
                maxIndex = j;
            }
        }
        pushToStack(tempItems[maxIndex]);
        maxID = 0;
        for (k = maxIndex; k < tempNumberOfItems; k++)
            tempItems[k] = tempItems[k + 1];
        tempNumberOfItems--;
    }
}

void StoreManager::DisplaySortByName() {
    top = -1;
    Item tempItems[50];
    int tempNumberOfItems = numberOfItems;
    int i, j, k;
    string maxName = "";
    int maxIndex;
    for (i = 0; i < numberOfItems; i++)
        tempItems[i] = items[i];
    for (i = 0; i < numberOfItems; i++) {
        for (j = 0; j < tempNumberOfItems; j++) {
            if (maxName < tempItems[j].getName()) {
                maxName = tempItems[j].getName();
                maxIndex = j;
            }
        }
        pushToStack(tempItems[maxIndex]);
        maxName = "";
        for (k = maxIndex; k < tempNumberOfItems; k++)
            tempItems[k] = tempItems[k + 1];
        tempNumberOfItems--;
    }
}

void StoreManager::pushToStack(Item i) {
    if (top == 50)
        cout << "\nStack Is Full!";
    else {
        top++;
        sortedStack[top] = i;
    }
}

void StoreManager::printStack() {
    int i;
    int tempTop = top;
    if (top == -1)
        cout << "\nNothing Added to Store!";
    else {
        for (i = 0; i <= tempTop; i++)
            popStack(sortedStack[top]);
    }
}

void StoreManager::popStack(Item i) {
    if (top == -1)
        cout << "\nNothing Added to Store!";
    else {
        cout << "\nItem ID: " << i.getID();
        cout << "\nItem Name: " << i.getName();
        cout << "\nItem Price: $" << i.getPrice();
        cout << "\nItem Quantity: " << i.getQuantity();
        cout << "\n";
        top--;
    }
}

void StoreManager::addItem() {
    items[numberOfItems].setValues(customID);
    customID++;
    numberOfItems++;
    cout << "\nItem added to the store!";
}

void StoreManager::deleteItem() {
    int k = 0;
    int deleteID;
    int i;
    cout << "\nEnter The Item ID to be deleted from the store: ";
    cin >> deleteID;
    for (i = 0; i < numberOfItems; i++) {
        if (items[i].getID() == deleteID)
            k = 1;
        if (k == 1)
            items[i] = items[i + 1];
    }
    if (k == 1) {
        numberOfItems--;
        cout << "Item Deleted!";
    }
    else
        cout << "\nItem Not Found! Invalid ID!";
}

void StoreManager::modifyItem() {
    int ID;
    int i;
    cout << "\nEnter Item ID to be modified: ";
    cin >> ID;
    for (i = 0; i < numberOfItems; i++) {
        if (items[i].getID() == ID) {
            cout << "\nYou Are Currently Editing: ";
            items[i].Display();
            items[i].modify();
        }
    }
}

void StoreManager::DisplayItems() {
    int i;
    cout << "\nItems in the store-";
    if (numberOfItems > 0) {
        for (i = 0; i < numberOfItems; i++)
            items[i].Display();
    }
    else
        cout << "\nNothing Added to Store!";
}

int StoreManager::getItemCount() {
    return numberOfItems;
}
