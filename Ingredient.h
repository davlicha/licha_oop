#ifndef DEMO_OOP_143_INGREDIENT_H
#define DEMO_OOP_143_INGREDIENT_H
#include <iostream>

class Ingredient {
private:
    std::string name;
    double amount;

public:
    std::string getName() {
        return name;
    }

    int getAmount() {
        return amount;
    }

    void setAmount(int value);

    Ingredient();
    Ingredient(std::string new_name);
    Ingredient(std::string new_name, double new_amount);
    ~Ingredient(){}

};

#endif //DEMO_OOP_143_INGREDIENT_H
