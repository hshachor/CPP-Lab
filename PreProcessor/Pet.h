#if (!defined PET_H)
#define PET_H

#include <string>
#include <iostream>

using namespace std;

class Pet
{
public:
    virtual void print() { cout << "name " << name << endl; }
protected:
    string name;
};
#endif