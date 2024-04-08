#ifndef DEMO_OOP_143_MEAL_H
#define DEMO_OOP_143_MEAL_H
#include <iostream>
using namespace std;


class Meal {
private:
    string name;
    int calories;
    bool isVegeterian;

public:

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Calories: " << calories << endl;
    }

    Meal();
    Meal(string new_name, int new_calories, bool new_isVegeterian);
    ~Meal(){}
};


#endif //DEMO_OOP_143_MEAL_H
