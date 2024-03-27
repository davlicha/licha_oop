#include <cstring>
#include "Category.h"


void Category::setAmount(int value) {
    if (value > 0) {
        numOfRecieps = value;
    }
}


Category::Category()
        : Category{"None", 0}{}

Category::Category(string new_name)
        : Category{new_name, 0}{}

Category::Category(string new_name, int new_numOfRecieps)
        : name{new_name}, numOfRecieps{new_numOfRecieps}{}