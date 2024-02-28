#include "Book.h"
#include <iostream>

using namespace std;

int main() {
    Reciep Reciep0;
    Reciep Reciep1("Kurka");
    Reciep Reciep2("Kurka", "Delicious food");
    Reciep Reciep3("Kurka", "Delicious food", 5);
//    Ingredient Ingredient1;

    Reciep0.Show();
    cout << endl;
    Reciep1.Show();
    cout << endl;
    Reciep2.Show();
    cout << endl;
    Reciep3.Show();

//    Recipe1().changePortions(23);
//    cout << endl << Recipe1().getPortions();

//    cout << Ingredient1.getName();
//    Ingredient1.changeAmount(30);
//    cout << endl << Ingredient1.getAmount();

    return 0;
};