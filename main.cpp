#include <iostream>
#include "Recipe.h"
#include "Ingredient.h"
#include "Category.h"
#include "Meal.h"
using namespace std;

int Recipe::count = 0;

void showTotalCalories(Meal &meal, int baseCalories) {
    cout << "Calories overall: " << meal.calculateNutritionalValue(baseCalories) << endl;
}

void printOne(Meal &obj){
    cout << obj;
}
void printTwo(Printable &obj){
    cout << obj;
}


int main() {

    //Problem demonstration
    Meal meal1;
    Pie pie1;
    meal1.problem();
    pie1.problem();
    Meal *mp1 = new Pie();
    mp1->problem();
    delete mp1;

    //virtual functions
    Meal *m = new Meal();
    Meal *p = new Pie();
    Meal *s = new Soup();
    cout << endl;
    cout << m->getCookingInstructions();
    cout << endl;
    cout << p->getCookingInstructions();
    cout << endl;
    cout << s->getCookingInstructions();
    cout << endl;

    cout << "Calories overall: " << m->calculateNutritionalValue(0);
    cout << endl;
    cout << "Calories overall with crust: " << p->calculateNutritionalValue(470);
    cout << endl;
    cout << "Calories overall with broth: " << s->calculateNutritionalValue(300);
    cout << endl;

    //Another way
    cout << endl;
    showTotalCalories(*m, 300);
    showTotalCalories(*p, 470);
    showTotalCalories(*s, 300);

    //abstract class
    cout << endl;
    cout << *m << endl;
    cout << *p << endl;
    cout << *s << endl;

    delete m;
    delete p;
    delete s;

    return 0;
}