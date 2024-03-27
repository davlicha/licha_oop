#include "Recipe.h"


Recipe::Recipe(string new_name, string new_description, int new_number_of_portions)
        : name{new_name}, description{new_description}, servings{new_number_of_portions} {count++;}

void Recipe::setPortions(int new_value){
    if (new_value > 0){
        servings = new_value;
    }
}

