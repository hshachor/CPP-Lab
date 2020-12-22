#pragma once
#include "List.h"	//page 18
#include "Stack.h"

//-------------------------------------------------------
//  class StackList
//  Stack implemented using List operations
//-------------------------------------------------------

class StackList : public Stack
{
public:
    // constructors
    StackList();
    StackList(const StackList&);

    // Stack operations
    void clear() override;
    bool isEmpty() const override;
    int pop() override;
    void push(int value) override;
    int top() override;

protected:
    // data fields
    List data;
};

//-------------------------------------------------------
//  class StackList implementation
//-------------------------------------------------------
StackList::StackList() :data()
{
    // create and initialize a Stack based on Lists
}
StackList::StackList(const StackList& lst)
    : data(lst.data)
{    /* copy constructor*/
}

void StackList::clear()
{
    // clear all elements from Stack, by setting
    // delete all values from List
    data.clear();
}

bool StackList::isEmpty() const
{    // return true if Stack is empty
    return data.isEmpty();
}

int StackList::pop()
{
    // return and remove the intopmost element in the Stack
    // get first element in List
    int result = data.firstElement();
    // remove element from List
    data.removeFirst();
    // return value
    return result;
}

void StackList::push(int val)
{
    // push new value onto Stack
    data.add(val);
}

int StackList::top()
{
    return data.firstElement();
}
