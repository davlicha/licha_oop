#include "Book.h"
#include <iostream>

Reciep::Reciep() {}

void Reciep::changePortions(int value) {
    if (value > 0){
        number_of_portions = value;
    }
}

void Ingredient::changeAmount(int value) {
    if (value > 0) {
        amount = value;
    }
}

void Category::changeAmount(int value) {
    if (value > 0) {
        amount_of_recipes = value;
    }
}