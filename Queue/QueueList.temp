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

//== class QueueList implementation ==

QueueList::QueueList() :data()
{
    // no further initialization
}

QueueList::QueueList(const QueueList& v) : data(v.data) {}

void QueueList::clear()
{
    data.clear();
}


int QueueList::dequeue()
{
    int result = data.firstElement();
    data.removeFirst();
    return result;
}


void QueueList::enqueue(int value)
{
    data.addToEnd(value);
}

int QueueList::front()
{
    return data.firstElement();
}



bool QueueList::isEmpty() const
{
    return data.isEmpty();

}
