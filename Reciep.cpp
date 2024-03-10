#include "Reciep.h"


Reciep::Reciep(std::string new_name, std::string new_description, int new_number_of_portions)
        : name{new_name}, description(new_description), numOfPortions{new_number_of_portions} {}

void Reciep::setPortions(int new_value){
    if (new_value > 0){
        numOfPortions = new_value;
    }
}

