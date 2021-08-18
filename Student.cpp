#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentID, char pname[])
{
  studentID = pstudentID;
  strcpy(name, pname);
}

// Display StudentId and Name
void Student::display() 
{
  cout << "Student ID is   : " << studentID << endl;
  cout << "Student Name is : " << name << endl;
}
