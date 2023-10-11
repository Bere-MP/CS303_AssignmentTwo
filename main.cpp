// Name: Berenice Moreno-Perez
// Date: 10 / 03 / 2023
// Class Assignment: CS 303 Assignment #2

#include <iostream>
#include "Single_Linked_List.h"
#include "Professional.h"
#include "Nonprofessional.h"

int main() {
  Professional profTest("Alexander Dave", 8000, 90, 35);
  Nonprofessional nonprofTest("Tom Simons", 12.5, 50, 35);

  cout << "________________________________________" << endl;
  cout << "Professional Employee:" << endl;
  profTest.print();
  
  cout << endl;

  cout << "________________________________________" << endl;
  cout << "Nonprofessional Employee:" << endl;
  nonprofTest.print();

  return 0;
}
