#include "Employee.h"

// prints out Employee Information
void Employee::print() const{
  cout << "Name: " << name << endl;
  cout << "Weekly Salary: $" << calculateWeeklySalary() << endl;
  cout << "Health Insurance Contribution: " << calculateHealthCareContribution() << endl;
  cout << "Vacation Days: " << calculateWeeklyVacationDays() << endl;
}
