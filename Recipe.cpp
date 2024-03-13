#include "Recipe.h"


Recipe::Recipe(std::string new_name, std::string new_description, int new_number_of_portions)
        : name{new_name}, description(new_description), servings{new_number_of_portions} {}

void Recipe::setPortions(int new_value){
    if (new_value > 0){
        servings = new_value;
    }
}

