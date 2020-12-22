#pragma once
#include "Vector.h"         //homework targil 2 !
#include "Stack.h"
//-------------------------------------------------------
//  class StackVector
//  Stack implemented using Vector
//  Vector will grow as necessary to avoid overflow
//-------------------------------------------------------

class StackVector : public Stack
{
public:
    // constructor requires a starting size
    StackVector(unsigned int capacity);
    StackVector(const StackVector& s);

    // Stack operations
    void clear() override;
    bool isEmpty() const override;
    int pop() override;
    void push(int value) override;
    int top() override;

protected:
    // data fields
    Vector data;
};

//-------------------------------------------------------
//  class StackVector implementation
//-------------------------------------------------------


StackVector::StackVector(unsigned int capacity)
    : data(capacity)
{
    // create and initialize a Stack based on Vectors
}

StackVector::StackVector(const StackVector& s) : data(s.data) {}

void StackVector::clear()
{
    // clear all elements from Stack, by setting
    // index to bottom of Stack
    data.clear();
}

bool StackVector::isEmpty() const
{
    return data.getSize() == 0;
}

int StackVector::pop()
{
    // return and remove the intopmost element in the Stack
    if (isEmpty())
        throw "Stack is empty";
    return data.delLast();
}


void StackVector::push(int val)
{
    // push new value onto Stack
    data.insert(val);
}

int StackVector::top()
{
    // return the intopmost element in the Stack
    if (isEmpty()) throw "Stack is empty";
    return data[data.getSize() - 1];
}

