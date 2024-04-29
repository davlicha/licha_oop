#ifndef DEMO_OOP_143_MEAL_H
#define DEMO_OOP_143_MEAL_H
#include "Ingredient.h"
#include "Recipe.h"
#include <iostream>
#include <vector>
using namespace std;

class Printable {
    friend ostream &operator<<(ostream &os, const Printable &obj) {
        obj.print(os);
        return os;
    }

public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable() {};

};

class Meal : public Printable {
private:
    string name;
    int calories;
    bool isVegan;
    Recipe recipe;

public:

    virtual void print(ostream &os) const override {
        os << "Hello, I'm Meal!" << endl;
    }

    virtual string getCookingInstructions() const {
        string instructions = "Meal Cooking Instructions:\n";
        instructions += "HAhahahahahh there is no instructions for cooking meal, ONLY for pie and soup!\n";
        return instructions;
    }

    virtual int calculateNutritionalValue(int baseCalories) const {
        return baseCalories;
    }

    void addRecipe() {
        cout << "ADD recipe: " << endl;
        cin >> recipe;
        cout << recipe;
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Calories: " << calories << endl;
        cout << "Vegan: ";
        if(isVegan)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    Meal(Meal &&other) noexcept :
            name{other.name}, calories{other.calories}, isVegan{other.isVegan} {
        other.name = "Unknown";
        other.calories = 0;
        other.isVegan = false;
    }

    Meal(const Meal &other) :
            name{other.name},
            calories{other.calories},
            isVegan{other.isVegan}{}

    Meal &operator=(const Meal &rhs) {
        if (this != &rhs){
            name = rhs.name;
            calories = rhs.calories;
            isVegan = rhs.isVegan;
        }
        return *this;
    }

    void problem()
    {
        cout << "Meal tester" << endl;
    }

    Meal();
    Meal(string new_name, int new_calories, bool new_isVegan);
    virtual ~Meal(){}
};

class Pie : public Meal {
private:
    string crustType;

public:

    virtual void print(ostream &os) const override {
        os << "Hello, I'm Pie!" << endl;
    }

    virtual string getCookingInstructions() const override {
        string instructions = "Pie Cooking Instructions:\n";
        instructions += "- Preheat oven to 375 F (190 C).\n";
        instructions += "- Prepare pie crust and filling according to recipe.\n";
        instructions += "- Place pie crust in a pie plate.\n";
        instructions += "- Pour filling into pie crust.\n";
        instructions += "- Bake for 30-40 minutes, or until crust is golden brown and filling is set.\n";
        return instructions;
    }

    virtual int calculateNutritionalValue(int baseCalories) const override {
        int crustCalories = 50;
        baseCalories += crustCalories;
        return baseCalories;
    }

    void displayInfo() const {
        Meal::displayInfo();
        cout << "Crust type: " << crustType << endl;
    }

    Pie(const Pie &other) :
            Meal(other),
            crustType{other.crustType}{}

    Pie &operator=(const Pie &rhs) {
        if (this != &rhs){
            Meal::operator=(rhs);
            this->crustType=(rhs.crustType);
        }
        return *this;
    }

    void problem()
    {
        cout << "Pie tester" << endl;
    }

    Pie();
    Pie(string new_name, int new_calories, bool new_isVegan, string new_crustType);
    virtual ~Pie(){}
};


class Soup : public Meal {
    string brothType;

public:

    virtual void print(ostream &os) const override {
        os << "Hello, I'm Soup!" << endl;
    }

    virtual string getCookingInstructions() const override {
        string instructions = "Soup Cooking Instructions:\n";
        instructions += "- Prepare ingredients according to recipe.\n";
        instructions += "- Heat oil in a pot over medium heat.\n";
        instructions += "- Add aromatics (e.g., onions, carrots, celery) and cook until softened.\n";
        instructions += "- Add other vegetables according to recipe and cook until tender.\n";
        instructions += "- Add broth and bring to a boil.\n";
        instructions += "- Reduce heat and simmer for 15-20 minutes, or until flavors meld.\n";
        instructions += "- Season with salt, pepper, and other herbs to taste.\n";
        return instructions;
    }

    virtual int calculateNutritionalValue(int baseCalories) const override {
        int brothCalories = 105;
        baseCalories += brothCalories;
        return baseCalories;
    }

    void displayInfo() const {
        Meal::displayInfo();
        cout << "Broth type: " << brothType << endl;
    }

    Soup(Soup &&other) noexcept :
            Meal(move(other)), brothType{other.brothType} {
        other.brothType = "Unknown";
    }

    Soup();
    Soup(string new_name, int new_calories, bool new_isVegan, string new_brothType);
    virtual ~Soup(){};
};

class Grand : public Printable {
public:
    virtual void print(ostream &os) const override {
        os << "Hello, I'm Grandmaster!" << endl;
    }
    virtual ~Grand() {};

};


#endif //DEMO_OOP_143_MEAL_H
