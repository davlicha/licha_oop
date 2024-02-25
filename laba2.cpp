#include "Book.h"
#include <iostream>

using namespace std;

int main() {
    Reciep *Recipe1 = new Reciep();
    Ingredient *Ingredient1 = new Ingredient();

    cout << Recipe1->getPortions();
    Recipe1->changePortions(23);
    cout << endl << Recipe1->getPortions();

    cout << Ingredient1->getName();
    Ingredient1->changeAmount(30);
    cout << endl << Ingredient1->getAmount();

    delete Recipe1;
    delete Ingredient1;
    return 0;
};