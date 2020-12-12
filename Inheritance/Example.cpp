#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Document
{
private:
    char* name;  // Doc name.

public:
    Document(char* docName = nullptr);
    void setName(char*);
    char* getName() { return name; };
    void print();
};

Document::Document(char* docName)
{
    setName(docName);
}

void Document::setName(char* docName)
{
    if (docName) {
        int len = strlen(docName) + 1;
        name = new char[len];
        strcpy(name, docName);
    }
}

void Document::print()
{
    cout << "Name: " << name << endl;
}

class Book : public Document
{
private:
    long pageCount;
public:
    Book(char* name = nullptr, long pageNum = 0);
    void setNumOfPages(long num);
    void print();
};

Book::Book(char* name, long pageNum) :
    Document(name)
{
    pageCount = pageNum;
}

void Book::setNumOfPages(long num)
{
    pageCount = num;
}

void Book::print()
{
    Document::print();
    cout << "Number of pages: " << pageCount << endl;
}

int main() {
    Document d;
    Book b;
    d.setName("Doc");
    b.setName("My Book");
    b.setNumOfPages(543);

    d.print();
    b.print();

    b.Document::print();
    return 0;
}

/*
Output:
Name: Doc
Name: My Book
Number Of Pages : 543
Name : My Book
*/