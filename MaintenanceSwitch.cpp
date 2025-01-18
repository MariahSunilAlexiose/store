#include "StoreManager.h"

void MaintenanceSwitch(StoreManager& store) {
    int choice;
    do {
        cout << endl;
        cout << "***************************************" << endl;
        cout << "              MAINTENANCE              " << endl;
        cout << "***************************************" << endl;
        cout << "1. Add an item" << endl;
        cout << "2. Delete an item " << endl;
        cout << "3. Modify an item " << endl;
        cout << "4. Display All Items (Sorted by ID)" << endl;
        cout << "5. Display All Items Sorted By Price" << endl;
        cout << "6. Display All Items Sorted By Name" << endl;
        cout << "7. Back to main menu" << endl;
        cout << "***************************************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            store.addItem();
            break;
        case 2:
            store.DisplayItems();
            if (store.getItemCount() > 0) {
                store.deleteItem();
            }
            break;
        case 3:
            store.DisplayItems();
            if (store.getItemCount() > 0) {
                store.modifyItem();
            }
            break;
        case 4:
            store.DisplayItems();
            break;
        case 5:
            store.DisplaySortByPrice();
            store.printStack();
            break;
        case 6:
            store.DisplaySortByName();
            store.printStack();
            break;
        case 7:
            break;
        default: cout << "Wrong choice!" << endl;
        }
    } while (choice != 7);
}
