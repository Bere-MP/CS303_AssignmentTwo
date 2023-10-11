#pragma once

#include "Single_Linked_List.h"

// Employee class
class Employee {
  protected:
    // Protected since it will have inherited classes
    string name;
    double salary;
    double healthInsuranceContribution;
    int vacationDays;

  public:
  // initialize the data to what the input is
    Employee(const string& name, double salary, double healthInsuranceContribution, int vacationDays) : name(name), salary(salary), healthInsuranceContribution(healthInsuranceContribution), vacationDays(vacationDays) {}

    // Initializes the data to zero incase nothing was inputted
    virtual double calculateWeeklySalary() const = 0;
    virtual double calculateHealthCareContribution() const = 0;
    virtual int calculateWeeklyVacationDays() const = 0;

    void print() const;
};
