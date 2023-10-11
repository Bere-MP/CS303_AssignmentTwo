#include "Nonprofessional.h"

//returns weekly salary
double Nonprofessional::calculateWeeklySalary() const {
    return salary * 35; // Assume the average worker works 35 hours a week 
  }

// returns health contribution
double Nonprofessional::calculateHealthCareContribution() const {
    return healthInsuranceContribution;
  }

// calculates Vacation days
int Nonprofessional::calculateWeeklyVacationDays() const {
    return vacationDays / 10; 
  }
