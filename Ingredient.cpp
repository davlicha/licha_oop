#include "Ingredient.h"

void Ingredient::setAmount(int value) {
    if (value > 0) {
        amount = value;
    }
}

Ingredient::Ingredient()
    : name{"Unknown"}, amount{0}{}

Ingredient::Ingredient(std::string new_name)
    : name{new_name}, amount{0}{}

Ingredient::Ingredient(std::string new_name, double new_amount)
    : name{new_name}, amount{new_amount}{}
