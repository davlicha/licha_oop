#include <iostream>
#include "Reciep.h"
#include "Ingredient.h"
#include "Category.h"

using namespace std;

int main() {
//    Reciep Reciep0;
//    Reciep Reciep1("Kurka");
//    Reciep Reciep2("Kurka", "Delicious food");
//    Reciep Reciep3("Kurka", "Delicious food", 5);
//
//    Reciep0.Show();
//    cout << endl;
//    Reciep1.Show();
//    cout << endl;
//    Reciep2.Show();
//    cout << endl;
//    Reciep3.Show();

    Ingredient Ingredient0;
    Ingredient Ingredient1("Rozmaryn");
    Ingredient Ingredient2("Rozmaryn", 3.5);

    Ingredient0.getName();
    Ingredient0.setAmount(30);
    cout << endl << Ingredient0.getAmount();

    Category Category0;
    Category Category1("Classic");
    Category Category2("V pechi", 23);


    Category0.setName("Do stolu");
    Category1.setAmount(45);
    Category0.getName();
    Category1.getAmount();
    Category2.getName();
    Category2.getAmount();


    return 0;
};