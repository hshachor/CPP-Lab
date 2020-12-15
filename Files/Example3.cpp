#include <iostream >
#include <fstream>
using namespace std;

struct workers
{
    long id;
    char name[15];
    float hours;
    float salary;
};

int main()
{
    ofstream f1;
    f1.open("workers.txt");
    workers worker;

    for (int i = 0; i < 3; i++) {
        cout << "enter workers name ";
        cin >> worker.name;
        cout << "enter " << worker.name << "'s id ";
        cin >> worker.id;
        cout << "enter numbet of hours ";
        cin >> worker.hours;
        cout << "enter a salary per hour ";
        cin >> worker.salary;
        f1.write((char*)&worker, sizeof(workers));
    }
    f1.close();

    ifstream f2("workers.txt");
    f2.read((char*)&worker, sizeof(workers));
    while (!f2.eof()) {
        cout << worker.name << endl;
        f2.read((char*)&worker, sizeof(workers));
    }
    return 0;
}