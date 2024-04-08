#include "Meal.h"

    //Meal
Meal::Meal()
        : name{"Unknown"}, calories{0}, isVegeterian{false}{}

Meal::Meal(string new_name, int new_calories, bool new_isVegeterian)
    : name{new_name}, calories{new_calories}, isVegeterian{new_isVegeterian}{}


    //Pie
Pie::Pie()
    : Meal{}, crustType{"Unknown"}{}

Pie::Pie(string new_crustType)
    : Meal{}, crustType{new_crustType}{}