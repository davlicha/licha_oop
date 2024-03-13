#ifndef DEMO_OOP_143_INGREDIENT_H
#define DEMO_OOP_143_INGREDIENT_H
#include <iostream>
using namespace std;

class Ingredient {
private:
    std::string name;
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
    Ingredient(std::string new_name);
    Ingredient(std::string new_name, double new_amount);
    ~Ingredient(){}

};

#endif //DEMO_OOP_143_INGREDIENT_H
