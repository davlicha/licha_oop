#ifndef DEMO_OOP_143_MEAL_H
#define DEMO_OOP_143_MEAL_H
#include "Ingredient.h"
#include "Recipe.h"
#include <iostream>
#include <vector>
using namespace std;


class Meal {
private:
    string name;
    int calories;
    bool isVegan;
//    vector<Ingredient> ingridients;
    Recipe recipe;

public:

//    void addIngredient(const Ingredient ingredient) {
//        ingredients.push_back(ingredient);
//    }

    void addRecipe() {
    cout << "ADD recipe: " << endl;
    cin >> recipe;
    cout << recipe;
}

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Calories: " << calories << endl;
    }

    Meal();
    Meal(string new_name, int new_calories, bool new_isVegan);
    ~Meal(){}
};


class Pie : public Meal {
private:
    string crustType;

public:

    void displayInfo() const {
        Meal::displayInfo();
        cout << "Crust type: " << crustType << endl;
    }

    Pie();
    Pie(string new_crustType);
    ~Pie(){}
};


class Soup : public Meal {
    string brothType;

public:

    void displayInfo() const {
        Meal::displayInfo();
        cout << "Broth type: " << brothType << endl;
    }

    Soup();
    Soup(string new_brothType);
    ~Soup(){}
};

#endif //DEMO_OOP_143_MEAL_H
