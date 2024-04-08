#include "Meal.h"

    //Meal
Meal::Meal()
        : name{"Unknown"}, calories{0}, isVegan{false}{}

Meal::Meal(string new_name, int new_calories, bool new_isVegan)
    : name{new_name}, calories{new_calories}, isVegan{new_isVegan}{}


    //Pie
Pie::Pie()
    : Meal{}, crustType{"Unknown"}{}

Pie::Pie(string new_crustType)
    : Meal{}, crustType{new_crustType}{}


    //Soup
Soup::Soup()
    : Meal{}, brothType{"Unknown"}{}

Soup::Soup(string new_brothType)
    : Meal{}, brothType{new_brothType}{}