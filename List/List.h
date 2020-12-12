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
        Link(int linkValue = 0, Link* nextPtr = NULL);
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

//------------------------------------------------
//  class Link implementation
//------------------------------------------------
List::Link::Link(int val, Link* nxt) :
    value(val), next(nxt) {}

List::Link::Link(const Link& source) :
    value(source.value), next(source.next) {}


//--------------------------------------------
//  class List implementation
//--------------------------------------------
List::List() : head(nullptr)
{
    // no further initialization
}

List::List(const List& l)
{
    Link* src, * trg;       //define two pointers one for each list,src - source, trg - new list

    if (l.head == nullptr)     //if source is empty list
        head = nullptr;
    else //list is not empty
    {
        //create first element in list
        head = new Link(l.head->value, nullptr);

        //two pointers will each get beginning of list
        src = l.head;
        trg = head;
        //go over source list until end of list
        while (src->next != nullptr)
        {
            //create new Link, and attach to end of new list
            trg->next = new Link((src->next)->value, nullptr);
            src = src->next;
            trg = trg->next;
        }
    }
}

List::~List()
{
    clear();
}

void List::clear()
{
    // empty all elements from the List
    Link* next;         //temp pointer
    for (Link* p = head; p != nullptr; p = next)
    {
        // delete the element pointed to by p
        next = p->next;   //point to next element
        p->next = nullptr;
        delete p;

    }
    // mark that the List contains no elements
    head = nullptr;
}

bool List::isEmpty() const
{
    // test to see if the List is empty
    // List is empty if the pointer to the head
    // Link is null

    return head == nullptr;
}

void List::add(int val)
{
    //Add a new value to the front of a Linked List
    head = new Link(val, head);
    if (head == nullptr)
        throw "failed in memory allocation";
}

int List::firstElement() const
{
    // return first value in List
    if (isEmpty())
        throw "the List is empty, no first Element";
    return head->value;
}

bool  List::search(const  int& val) const
{
    // loop to test each element
    for (Link* p = head; p != nullptr; p = p->next)
        if (val == p->value)
            return true;
    // not found
    return false;
}

void List::removeFirst()
{
    // make sure there is a first element
    if (isEmpty())
        throw "the Listis empty, no Elements to remove";

    // save pointer to the removed node
    Link* p = head;
    // reassign the first node
    head = p->next;
    p->next = nullptr;

    // recover memory used by the first element
    delete p;
}
