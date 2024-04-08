#include <iostream>
#include "Recipe.h"
#include "Ingredient.h"
#include "Category.h"
#include "Meal.h"
using namespace std;

int Recipe::count = 0;

int main() {

////  move
//    Ingredient Ingredient1("Smth", 4);
//    cout << Ingredient1;
//    Ingredient Ingredient2(move(Ingredient1));
//    cout << Ingredient2;
//    cout << Ingredient1;
//
////  copy
//    Recipe Kraken;
//    cout << "Enter recipe kraken: " << endl;
//    cin >> Kraken;
//    Recipe ItalyKraken(Kraken);
//    cout << Kraken;
//    cout << "Italy version: " << endl << ItalyKraken << endl;
//
////  static
//    Recipe::PrintCount();
//    cout << endl;
//
////  overload operator
//    if (Ingredient1 == Ingredient2)
//        cout << "They are similar!";
//    else
//        cout << "They are different!";

    Meal meal1("pie", 300, true);
    Pie apple_pie1;
    Pie apple_pie2("Crispy");

    cout << "MEAL:" << endl;
    meal1.displayInfo();
    cout << endl;
    cout << "APPLE PIE:" << endl;
    apple_pie2.displayInfo();

    meal1.addRecipe();

    return 0;
}