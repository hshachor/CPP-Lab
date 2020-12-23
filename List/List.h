#pragma once
//------------------------------------------------
//  class List	
//      arbitrary size Lists
//      permits insertion and removal 
//      only from the front of the List
//------------------------------------------------
class List
{

protected:
    //--------------------------------------------
    //  inner class link
    //  a single element for the linked List 
    //--------------------------------------------
    class Link
    {
    public:
        // constructor
        Link(int linkValue, Link* nextPtr);
        Link(const Link&);

        // data areas
        int value;
        Link* next;

    };	//end of class Link

public:
    // constructors
    List();//default
    List(const List&);//copy list
    ~List();//destructor - erase list

    // operations
    void add(int value);        //insert element into list
    int firstElement() const;   //return value of first element
    bool search(const int& value) const;
    bool isEmpty() const;       //check if empty
    void removeFirst();         //remove first elemnt from list
    void clear();               //erase list

protected:
    // data field
    Link* head;

};
