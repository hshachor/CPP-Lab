//--------------------------------------------
// class DoubleEndedList
// a variation on Lists -can add elements 
// to the end as well as to front
//--------------------------------------------
#include "List.h"
class DoubleEndedList : public List
{
public:
    // constructors
    DoubleEndedList();

    // override the following methods from class List
    void add(int value);
    void clear();
    void removeFirst();
    
    // add a new element to the end of the List
    void addToEnd(int value);

protected:
    // data area --Link to end
    Link* last;
};

//------------------------------------------------
//  class DoubleEndedList implementation
//------------------------------------------------
DoubleEndedList::DoubleEndedList() : List(), last(nullptr)
{}

void DoubleEndedList::add(int val)
{
    // add an element to the front of a double 
    // ended List only need to handle addition to
    // empty List
    if (isEmpty()) {
        List::add(val);
        last = head;
    }
    else
        List::add(val);
}

void DoubleEndedList::clear()
{
    //delete all values from collection
    List::clear();
    // then set the pointer to the last element to zero
    last = nullptr;
}

void DoubleEndedList::removeFirst() {
    // remove the first element 
    List::removeFirst();
    // if we remove last element
    if (isEmpty())
        last = nullptr;
}

void DoubleEndedList::addToEnd(int val)
{
    // add a new element to end of a double ended List
    if (last != nullptr)
    {
        last->next = new Link(val, nullptr);
        last = last->next;
    }
    // otherwise, just add to front
    else
        add(val);
}