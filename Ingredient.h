#ifndef DEMO_OOP_143_INGREDIENT_H
#define DEMO_OOP_143_INGREDIENT_H
#include <iostream>
using namespace std;

class Ingredient {
private:
    string name;
    double amount;
    int queue;

public:
    virtual void ingredientNum() const final{
        cout << "Current page is: " << queue << endl;
    }

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
    virtual ~Ingredient(){}

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

//class Treasure : public Ingredient {
//public:
//    void ingredientNum() const override{
//
//    }
//};

#endif //DEMO_OOP_143_INGREDIENT_H
