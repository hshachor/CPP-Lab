#include "SortAndPrint.h"
#include <iostream>
#include <string.h>

class String :
    public SortAndPrint
{
private:
    char words[4][20];
    void swap(int i, int j) override final;
    int isSmaller(int i, int j) override final;
    void show(int i) override final;
public:
    String(const char*, const char*, const char*, const char*);

};

String::String(const char* w0, const char* w1, const char* w2, const char* w3)
{
    setSize(4);
    strcpy_s(words[0], w0);
    strcpy_s(words[1], w1);
    strcpy_s(words[2], w2);
    strcpy_s(words[3], w3);
}

int String::isSmaller(int i, int j)
{
    return strcmp(words[i], words[j]) < 0;
}

void String::swap(int i, int j)
{
    char tmp[20];
    strcpy_s(tmp, words[i]);
    strcpy_s(words[i], words[j]);
    strcpy_s(words[j], tmp);
}

void String::show(int i)
{
    cout << i << " : " << words[i] << endl;
}
