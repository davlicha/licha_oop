#ifndef DEMO_OOP_143_BOOK_H
#define DEMO_OOP_143_BOOK_H
#include <iostream>



class Reciep {
private:
    std::string name;
    std::string description;
    int number_of_portions;

public:
    int getPortions(){
        return number_of_portions;
    }
    void changePortions(int value);

    Reciep();
    Reciep(std::string new_name);
    Reciep(std::string new_name, std::string new_description);
    Reciep(std::string new_name, std::string new_description, int new_number_of_portions);
};

class Ingredient {
private:
    std::string name;
    double amount;

public:
    std::string getName() {
        return name;
    }
    int getAmount() {
        return amount;
    }
    void changeAmount(int value);
};

class Category {
private:
    std::string name;
    int amount_of_recipes;

public:
    std::string getName() {
        return name;
    }
    void changeAmount(int value);
};


#endif //DEMO_OOP_143_BOOK_H
