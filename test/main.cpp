#include <iostream>
#include <fstream>
#include <vector>

class ShoppingItem {
public:
    ShoppingItem(const std::string& name, int quantity) : name(name), quantity(quantity) {}

    std::string getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }

    void updateQuantity(int newQuantity) {
        quantity = newQuantity;
    }

private:
    std::string name;
    int quantity;
};

class ShoppingList {
public:
    void addItem(const std::string& name, int quantity) {
        items.push_back(ShoppingItem(name, quantity));
    }

    void updateItem(const std::string& name, int newQuantity) {
        for (auto& item : items) {
            if (item.getName() == name) {
                item.updateQuantity(newQuantity);
                return;
            }
        }
        std::cout << "Item not found in the list." << std::endl;
    }

    void displayItems() const {
        std::cout << "Shopping List:" << std::endl;
        for (const auto& item : items) {
            std::cout << item.getName() << " - Quantity: " << item.getQuantity() << std::endl;
        }
    }

private:
    std::vector<ShoppingItem> items;
};

int main() {
    ShoppingList shoppingList;

    while (true) {
        std::cout << "1. Add Item\n2. Update Item\n3. Display Items\n4. Exit\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string name;
            int quantity;
            std::cout << "Enter item name: ";
            std::cin >> name;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            shoppingList.addItem(name, quantity);
        } else if (choice == 2) {
            std::string name;
            int newQuantity;
            std::cout << "Enter item name: ";
            std::cin >> name;
            std::cout << "Enter new quantity: ";
            std::cin >> newQuantity;
            shoppingList.updateItem(name, newQuantity);
        } else if (choice == 3) {
            shoppingList.displayItems();
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    }

    return 0;
}
