// ЛР 10.1 A.cpp

#include <iostream>
#include <Windows.h> 
#include "Students.h"
using namespace std;

int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    int N;
    cout << "Enter the number of students N: "; cin >> N;

    Student* p = new Student[N];
    int k[3];

    Create(p, N);
    Print(p, N);

    CountThree(p, N, k);
    cout << "Number of grades 3 (satisfactory) in each subject:" << endl;
    cout << "  Physics           : " << k[0] << endl;
    cout << "  Maths             : " << k[1] << endl;
    cout << "  Informatics       : " << k[2] << endl;
    cout << endl;

    PrintPhysicsMath45(p, N);
    return 0;
}