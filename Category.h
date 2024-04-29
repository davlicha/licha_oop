#ifndef DEMO_OOP_143_CATEGORY_H
#define DEMO_OOP_143_CATEGORY_H
#include <iostream>
using namespace std;

class Category final {
private:
    string name;
    int numOfRecieps;

public:
    void getName() {
        cout << "Category: " << name << endl;
    }

    void setName(string new_name) {
        name = new_name;
    }

    void getAmount() {
        cout << "Number of recipes in the category: " << numOfRecieps << endl;
    }

    void setAmount(int value);

    Category();
    Category(string new_name);
    Category(string new_name, int new_numOfRecieps);
    ~Category(){}

    friend ostream &operator<<(ostream &os, const Category &obj) {
        os << "Name: " << obj.name << endl << "Number of recieps: " << obj.numOfRecieps << endl;
        return os;
    }

    friend istream &operator>>(istream &is, Category &obj) {
        getline(is, obj.name);
        is >> obj.numOfRecieps;
        return is;
    }
};

//class Subcategory : public Category {
//
//};

#endif //DEMO_OOP_143_CATEGORY_H
