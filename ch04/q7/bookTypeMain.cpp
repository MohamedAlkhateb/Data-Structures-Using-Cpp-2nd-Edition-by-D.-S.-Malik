#include "bookType.h"
#include <iostream>
#include <vector>

int main() {
  vector<bookType> bookVector;
  string authors[] = {"Malik"};
  bookType book("Data structure", "Alkhateb", authors, 1, "ISBN", 20.7, 2);
  bookVector.push_back(book);

  cout << "Enter title to search: ";
  char title[50];
  cin.getline(title, 50);
  int flag = 0;
  for (vector<bookType>::iterator i = bookVector.begin(); i != bookVector.end();
       i++) {
    if (i->checkTitle(title)) {
      cout << "There is a book with this title \n";
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "There is no book with this title" << endl;
  }

  cout << "Enter ISBN to search: ";
  char isbn[50];
  cin.getline(isbn, 50);
  flag = 0;
  for (vector<bookType>::iterator i = bookVector.begin(); i !=
  bookVector.end();
       i++) {
    if (i->checkISBN(isbn)) {
      cout << "There is a book with this ISBN" << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "There is no book with this ISBN" << endl;
  }

  bookVector[0].setCopies(5);
  cout << "Copies now = " << bookVector[0].showCopies() << endl;
}