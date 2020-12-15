#include "Pet.h"
class Cat : public Pet
{
public:
    void talk() { cout << "Meow Meow" << endl; }
private:
    string gender;
};