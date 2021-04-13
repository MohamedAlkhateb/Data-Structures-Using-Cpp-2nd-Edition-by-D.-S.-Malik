#ifndef MemberType_H
#define MemberType_H

#include <string>

using namespace std;

class memberType {
public:
  memberType(string, int, double);

  void modifyPersonName(string);
  void setPersonName(string);
  string showPersonName();

  void modifNumBooks(int);
  void setNumBooks(int);
  int showNumBooks();

  void modifyAmount(double);
  void setAmount(double);
  double showAmount();

private:
  string person;
  int numBooks;
  double amount;
};

#endif