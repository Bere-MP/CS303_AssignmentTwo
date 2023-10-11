#include "Professional.h"

// calculates weekly salary from monthly salary
double Professional::calculateWeeklySalary() const{
    return salary / 4;
}

// returns health contribution
double Professional::calculateHealthCareContribution() const{
    return healthInsuranceContribution;
}

// calculates vacation days
int Professional::calculateWeeklyVacationDays() const{
    return vacationDays / 4;
}
