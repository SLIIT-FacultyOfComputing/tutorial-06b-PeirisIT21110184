#include <iostream>
#include "Student.h"
using namespace std;
int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}
#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int StuId , const char stName[]) {

  studentId = StuId;
  strcpy(name,stName);
  
}

// Display StudentId and Name
void Student::display() {

  cout << "Student ID : " <<studentId <<endl;
  cout << "Name is : "<<name;
  
}