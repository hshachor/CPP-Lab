#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    char name[20];
    int grade;
    static int numOfStudents;
    static int numOfFails;
public:
    Student(char* n);
    void setGrade(int g);
    void percentageOfFailers();
};

int Student::numOfStudents = 0;
int Student::numOfFails = 0;

Student::Student(char* n)
{
    strcpy_s(name, n);
    numOfStudents++;
}
void Student::setGrade(int g)
{
    grade = g;
    cout << grade << endl;
    if (grade < 55)
        numOfFails++;
}
void Student::percentageOfFailers()
{
    cout << (float)numOfFails / numOfStudents * 100;
    cout << "% of the students failed\n";
}

int main()
{
    char name[15];
    int mark;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter students name and grade\n";
        cin >> name >> mark;
        Student s(name);
        s.setGrade(mark);
        s.percentageOfFailers();
    }

    //cout << Student::numOfStudents;  // error. numOfStudents and numOfFails are private
    //cout << Student::numOfFails;
    return 0;
}
