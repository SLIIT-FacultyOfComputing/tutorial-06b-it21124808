#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

//function implementation
void Student::assignDetails(int sId, char sname[])
{

      studentId = sId;
      strcpy(name, sname);

} //end of the function
void Student::display()
{
    
       cout << "Student ID: " << studentId << endl; //display
       cout << "Student Name: " << name << endl; //display
     
} //end of the function