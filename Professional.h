#pragma once

#include "Employee.h"

// Professional class inherited from the employee class
class Professional : public Employee {

public:
  Professional(const string& name, double salary, double healthInsuranceContribution, int vacationDays) : Employee(name, salary, healthInsuranceContribution, vacationDays) {}

  double calculateWeeklySalary() const;
  double calculateHealthCareContribution() const;
  int calculateWeeklyVacationDays() const;
};
