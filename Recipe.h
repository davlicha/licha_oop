#ifndef DEMO_OOP_143_RECIPE_H
#define DEMO_OOP_143_RECIPE_H
#include <iostream>
using namespace std;


class Recipe {
private:
    string name;
    string description;
    int servings;

public:
    static int count;

    static void PrintCount() {
        cout << "Number of recipes: " << count << endl;
    }

    void getPortions(){
        cout << "Number of portions: " << servings << endl;
    }

    void setPortions(int value);


    Recipe(string new_name = "Unknown", string new_description = "None", int new_number_of_portions = 0);
    ~Recipe(){}

    Recipe(const Recipe &other) :
            name{other.name},
            description{other.description},
            servings{other.servings} {count++;}

    friend ostream &operator<<(ostream &os, const Recipe &obj) {
        os << "Name: " << obj.name << endl << "Description: " << obj.description << endl << "Servings: " << obj.servings << endl;
        return os;
    }

    friend istream &operator>>(istream &is, Recipe &obj) {
        getline(is, obj.name);
        getline(is, obj.description);
        is >> obj.servings;
        return is;
    }
};



#endif //DEMO_OOP_143_RECIPE_H
