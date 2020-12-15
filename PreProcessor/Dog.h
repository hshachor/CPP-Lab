#include "Pet.h"

class Dog : public Pet {
public:
    void print() { cout << "name " << name << " breed " << breed << endl; }
    void price() { cout << "I am expensive!" << endl; }
private:
    string breed;
};