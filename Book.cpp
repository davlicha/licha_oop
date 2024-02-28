#include "Book.h"


//Reciep::Reciep()
//    :Reciep{"Unknown", "None", 0} {}
//
//Reciep::Reciep(std::string new_name)
//    :Reciep{new_name, "None", 0} {}
//
//Reciep::Reciep(std::string new_name, std::string new_description)
//    :Reciep{new_name, new_description, 0} {}

Reciep::Reciep(std::string new_name, std::string new_description, int new_number_of_portions)
        :name{new_name}, description(new_description), number_of_portions{new_number_of_portions} {}

void Reciep::setPortions(int new_value){
    if (new_value > 0){
        number_of_portions = new_value;
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