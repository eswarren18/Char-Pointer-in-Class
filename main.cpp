#include <iostream>

using namespace std;

class Student{
public:
    char* name;
    int marks1, marks2;
    Student(char*, int, int);
    void disp(){cout << name << " total: " << calc_media() << endl;}
    int calc_media(){return (marks1+marks2)/2;}
};

Student::Student(char* stName, int x, int y)
{
    name = stName;
    marks1 = x;
    marks2 = y;
}

int main()
{
    char *studentName = 0; int grade1, grade2;
    cout << "Enter student name: ";
    cin >> studentName;
    cout << " Enter two grades separated by a space: ";
    cin >> grade1;
    cin >> grade2;
    Student newStudent(studentName, grade1, grade2);

    newStudent.disp();

    return 0;
}
