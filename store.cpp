#include <iostream>

using namespace std;

int main() {
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
            cout << "Maintenance Switch to be added!" << endl;
            break;
        case 2:
            cout << "Transaction Switch to be added!" << endl;
            break;
        case 3: exit(0);
        default: cout << "Wrong choice!" << endl;
        }
    } while (choice != 3);
    return 0;
}