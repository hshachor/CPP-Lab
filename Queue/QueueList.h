#pragma once
#include "DoubleEndedList.h"
#include "Queue.h"
//-------------------------------------------------------
//  class QueueList
//      Queue implemented using List operations
//-------------------------------------------------------
class QueueList : public Queue
{
public:
    // constructors
    QueueList();
    QueueList(const QueueList& v);
    virtual ~QueueList() {}

    // implement Queue protocol 
    void clear() override;
    int dequeue() override;
    void enqueue(int value) override;
    int front() override;
    bool isEmpty() const override;

private:
    DoubleEndedList data;
};

