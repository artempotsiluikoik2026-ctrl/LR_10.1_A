// Students.cpp 

#include <iostream>
#include <iomanip>
#include <string>
#include "Students.h"
using namespace std;

void Create(Student* p, const int N)
{
    int specialty;
    for (int i = 0; i < N; i++)
    {
        cout << "Student No " << i + 1 << ":" << endl;
        cin.get(); 
        cin.sync(); 

        cout << " surname: "; getline(cin, p[i].surname);
        do {
            cout << " course (1-6): "; cin >> p[i].course;
        } while (p[i].course < 1 || p[i].course > 6);
        do {
            cout << " specialty (0 - Computer Science, 1 - Informatics," << endl;
            cout << "   2 - Labor Training, 3 - Math and Economics," << endl;
            cout << "   4 - Physics and Informatics): ";
            cin >> specialty;
        } while (specialty < 0 || specialty > 4);
        p[i].specialty = (Specialty)specialty;
        do {
            cout << " Physics grade (1-5): "; cin >> p[i].physics;
        } while (p[i].physics < 1 || p[i].physics > 5);
        do {
            cout << " Maths grade (1-5): "; cin >> p[i].math;
        } while (p[i].math < 1 || p[i].math > 5);
        do {
            cout << " Informatics grade (1-5): "; cin >> p[i].informatics;
        } while (p[i].informatics < 1 || p[i].informatics > 5);
        cout << endl;
    }
}

void Print(Student* p, const int N)
{
    string specialtyStr[] = { "Computer Science", "Informatics", "Labor Training", "Math and Economics",
                         "Physics and Informatics" };

    cout << "========================================================================================="
        << endl;
    cout << "| Student list                                                                          |"
        << endl;
    cout << "-----------------------------------------------------------------------------------------"
        << endl;
    cout << "| No  | Surname      | Course | Specialty               | Physics | Maths | Informatics |"
        << endl;
    cout << "-----------------------------------------------------------------------------------------"
        << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "| " << setw(3) << right << i + 1 << " ";
        cout << "| " << setw(12) << left << p[i].surname << " "
            << "| " << setw(6) << right << p[i].course << " "
            << "| " << setw(23) << left << specialtyStr[p[i].specialty] << " "
            << "| " << setw(7) << right << p[i].physics << " "
            << "| " << setw(5) << right << p[i].math << " "
            << "| " << setw(11) << right << p[i].informatics << " |" << endl;
    }
    cout << "========================================================================================="
        << endl;
    cout << endl;
}

void CountThree(Student* p, const int N, int* k)
{ 
    for (int j = 0; j < 3; j++)
        k[j] = 0;
    for (int i = 0; i < N; i++)
    {
        if (p[i].physics == 3)
            k[0]++;
        if (p[i].math == 3)
            k[1]++;
        if (p[i].informatics == 3)
            k[2]++;
    }
}

void PrintPhysicsMath45(Student* p, const int N)
{
    cout << "Surnames of students with grade 5 or 4 in both Physics and Maths:"
        << endl;
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        if ((p[i].physics == 5 || p[i].physics == 4)
            &&
            (p[i].math == 5 || p[i].math == 4))
        {
            k++;
            cout << setw(3) << right << k
                << " " << p[i].surname << endl;
        }
    }
    if (k == 0)
        cout << "  no such students" << endl;
    cout << endl;
}