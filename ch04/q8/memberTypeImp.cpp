#include "memberType.h"
#include <iostream>

memberType::memberType(string p, int n, double am) {
  setPersonName(p);
  setNumBooks(n);
  setAmount(am);
}

void memberType::modifyPersonName(string pName) { setPersonName(pName); }

void memberType::setPersonName(string pName) { person = pName; }

string memberType::showPersonName() { return person; }

void memberType::modifNumBooks(int num) { setNumBooks(num); }

void memberType::setNumBooks(int num) {
  if (num >= 0) {
    numBooks = num;
  } else {
    cerr << "Number of books should be greater than or equal zero.\n"
            "Number of books set to zero\n ";

    numBooks = 0;
  }
}

int memberType::showNumBooks() { return numBooks; }

void memberType::modifyAmount(double am) { setAmount(am); }

void memberType::setAmount(double am) {
  if (am >= 0) {
    amount = am;
  } else {
    cerr << "Amount should be greater than or equal zero.\n"
            "Amount set to zero\n";
    amount = 0.0;
  }
}

double memberType::showAmount() { return amount; }