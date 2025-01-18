#include "StoreManager.h"
#include "CartItem.h"

void TransactionSwitch(StoreManager& shop) {
    int choice;
    int i;
    int k = 0;
    CartItem cart[50];
    int itemsInCart = 0;
    int deleteID;
    int q;
    float totalPrice = 0;
    int tempID;
    do {
        cout << endl;
        cout << "***************************************" << endl;
        cout << "              Transaction              " << endl;
        cout << "***************************************" << endl;
        cout << "1. Add to cart" << endl;
        cout << "2. Remove From Cart" << endl;
        cout << "3. Display Cart" << endl;
        cout << "4. Print Bill " << endl;
        cout << "5. Back to main menu" << endl;
        cout << "***************************************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            shop.DisplayItems();
            if (shop.getItemCount() > 0) {
                cout << "\nEnter The Item ID to be added in the Cart: ";
                cin >> tempID;
                for (i = 0; i < shop.getItemCount(); i++) {
                    if (shop.items[i].getID() == tempID) {
                        cout << "\nEnter quantity of the item added: ";
                        cin >> q;
                        if (q <= shop.items[i].getQuantity()) {
                            cart[itemsInCart].setCartItem(shop.items[i].getName(), q, shop.items[i].getPrice(), shop.items[i].getID());
                            shop.items[i].modifyQuantity(q);
                            itemsInCart++;
                            cout << "Item Added to Cart!";
                        }
                        else
                            cout << "\nWe do not have that many in stock!";
                    }
                }
            }
            break;
        case 2:
            if (itemsInCart > 0) {
                for (i = 0; i < itemsInCart; i++)
                    cart[i].Display();
                cout << "\nEnter The Item ID to be removed from the cart: ";
                cin >> deleteID;
                for (i = 0; i < itemsInCart; i++) {
                    if (cart[i].getID() == deleteID)
                        k = 1;
                    if (k == 1)
                        cart[i] = cart[i + 1];
                }
                if (k == 1) {
                    itemsInCart--;
                    cout << "Item deleted from cart!";
                }
                else
                    cout << "\nItem Not Found! Invalid ID!";
            }
            else
                cout << "\nCart is empty!";
            break;
        case 3:
            if (itemsInCart > 0) {
                for (i = 0; i < itemsInCart; i++)
                    cart[i].Display();
            }
            else
                cout << "\nCart is empty!";
            break;
        case 4:
            totalPrice = 0;
            for (i = 0; i < itemsInCart; i++)
                cart[i].Display();
            if (itemsInCart > 0) {
                for (i = 0; i < itemsInCart; i++)
                    totalPrice += cart[i].getQuantity() * cart[i].getPrice();
                cout << "\nTotal Price: $" << totalPrice;
            }
            else
                cout << "\nCart is empty!";
            break;
        case 5: break;
        default: cout << "Wrong choice!" << endl;
        }
    } while (choice != 5);
}