#ifndef DEMO_OOP_143_INGREDIENT_H
#define DEMO_OOP_143_INGREDIENT_H
#include <iostream>
using namespace std;

class Ingredient {
private:
    string name;
    double amount;

public:
    void getName() {
        cout << "Name of ingredient: " << name << endl;
    }

    void getAmount() {
        cout << "Amount of ingredient: " << amount << endl;
    }

    void setAmount(int value);

    Ingredient();
    Ingredient(string new_name);
    Ingredient(string new_name, double new_amount);
    ~Ingredient(){}

    Ingredient(Ingredient &&other) noexcept :
            name{other.name}, amount{other.amount} {
        other.name = "";
        other.amount = 0;
    }

    bool operator==(const Ingredient &rhs) const {
        if (this->name == rhs.name)
        {
            return true;
        }
        return false;
    }


    friend ostream &operator<<(ostream &os, const Ingredient &obj) {
        os << "Name: " << obj.name << endl << "Amount: " << obj.amount << endl;
        return os;
    }

    friend istream &operator>>(istream &is, Ingredient &obj) {
        getline(is, obj.name);
        is >> obj.amount;
        return is;
    }




};

#endif //DEMO_OOP_143_INGREDIENT_H
