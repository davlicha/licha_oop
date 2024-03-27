#ifndef DEMO_OOP_143_RECIPE_H
#define DEMO_OOP_143_RECIPE_H
#include <iostream>
using namespace std;


class Recipe {
private:
    std::string name;
    std::string description;
    int servings;

public:
    void getPortions(){
        cout << "Number of portions: " << servings << endl;
    }

    void setPortions(int value);

    void Show() {
        cout << name << endl;
        cout << description << endl;
        cout << servings << endl;
    }

    Recipe(std::string new_name = "Unknown", std::string new_description = "None", int new_number_of_portions = 0);
    ~Recipe(){}

    Recipe(const Recipe &other) :
            name{other.name},
            description{other.description},
            servings{other.servings} {}

};



#endif //DEMO_OOP_143_RECIPE_H
