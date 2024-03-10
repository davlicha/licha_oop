#ifndef DEMO_OOP_143_RECIEP_H
#define DEMO_OOP_143_RECIEP_H
#include <iostream>
using namespace std;


class Reciep {
private:
    std::string name;
    std::string description;
    int numOfPortions;

public:
    int getPortions(){
        return numOfPortions;
    }

    void setPortions(int value);

    void Show() {
        cout << name << endl;
        cout << description << endl;
        cout << numOfPortions << endl;
    }

    Reciep(std::string new_name = "Unknown", std::string new_description = "None", int new_number_of_portions = 0);
    ~Reciep(){}

};



#endif //DEMO_OOP_143_RECIEP_H
