#include <iostream>
#include "StoreManager.h"
#include "MaintenanceSwitch.h"
#include "TransactionSwitch.h"

using namespace std;

int main() {
    StoreManager store;
    int choice;
    do {
        cout << endl;
        cout << "***************************************" << endl;
        cout << "               Main Menu               " << endl;
        cout << "***************************************" << endl;
        cout << "1. Maintenance" << endl;
        cout << "2. Transaction" << endl;
        cout << "3. Exit" << endl;
        cout << "***************************************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            MaintenanceSwitch(store);
            break;
        case 2:
            TransactionSwitch(store);
            break;
        case 3: exit(0);
        default: cout << "Wrong choice!" << endl;
        }
    } while (choice != 3);
    return 0;
}