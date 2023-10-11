#pragma once

#include "Employee.h"

// Class for nonprofessional thats inherited from the Employee class
class Nonprofessional : public Employee {
  public:
    Nonprofessional(const string& name, double hourlyRate, double healthInsuranceContribution, int workedHours) : Employee(name, hourlyRate, healthInsuranceContribution, workedHours) {}

    double calculateWeeklySalary() const override;
    double calculateHealthCareContribution() const override;
    int calculateWeeklyVacationDays() const override;
};
