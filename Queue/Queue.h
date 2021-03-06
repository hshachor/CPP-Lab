//---------------------------------------------------------
//  class Queue 
//  abstract class - simply defines protocol for
//   Queue operations
//---------------------------------------------------------
#pragma once
class Queue
{
public:
    // protocol for Queue operations
    virtual void clear() = 0;
    virtual int dequeue() = 0;
    virtual void enqueue(int value) = 0;
    virtual int front() = 0;
    virtual bool isEmpty() const = 0;
    virtual ~Queue() {}
};

