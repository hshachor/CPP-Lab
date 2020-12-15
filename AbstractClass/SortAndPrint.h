class SortAndPrint
{
protected:
    int size;
    virtual void swap(int i, int j) = 0;
    virtual void show(int i) = 0;
    virtual int isSmaller(int i, int j) = 0;
public:
    void setSize(int num);
    void print();
    void bubbleSort();
};

void SortAndPrint::setSize(int num)
{
    size = num;
}

void SortAndPrint::print()
{
    for (int i = 0; i < size; i++)
        show(i);
}

void SortAndPrint::bubbleSort()
{
    for (int last = size - 1; last > 0; last--)
        for (int i = 0; i < last; i++)
            if (isSmaller(i + 1, i))
                swap(i, i + 1);
}
