#ifndef DEMO_OOP_143_CATEGORY_H
#define DEMO_OOP_143_CATEGORY_H
#include <iostream>


class Category {
private:
    std::string name;
    int numOfRecieps;

public:
    void getName() {
        std::cout << "Category: " << name << std::endl;
    }

    void setName(std::string new_name) {
        name = new_name;
    }

    void getAmount() {
        std::cout << "Number of recipes in the category: " << numOfRecieps << std::endl;
    }

    void setAmount(int value);

    Category();
    Category(std::string new_name);
    Category(std::string new_name, int new_numOfRecieps);
    ~Category(){}

};


#endif //DEMO_OOP_143_CATEGORY_H
