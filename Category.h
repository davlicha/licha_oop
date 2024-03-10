#ifndef DEMO_OOP_143_CATEGORY_H
#define DEMO_OOP_143_CATEGORY_H
#include <iostream>


class Category {
private:
    std::string name;
    int numOfRecieps;

public:
    std::string getName() {
        std::cout << "Name of this category: " << name << std::endl;
    }

    void setName(std::string new_name) {
        name = new_name;
    }

    int getAmount() {
        std::cout << "Number of recipes in this category: " << numOfRecieps << std::endl;
    }

    void setAmount(int value);

    Category();
    Category(std::string new_name);
    Category(std::string new_name, int new_numOfRecieps);
    ~Category(){}

};


#endif //DEMO_OOP_143_CATEGORY_H
