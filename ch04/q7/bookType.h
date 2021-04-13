#ifndef BookType_H
#define BookType_H

#include <string>

using namespace std;

class bookType {
public:
  bookType(string, string, string[], int, string, double, int);

  string const showTitle();
  void setTitle(const string &);
  bool const checkTitle(const string &);

  int const showCopies();
  void const setCopies(const int &);

  string const showPublisher();
  void setPublisher(const string &);

  string const showISBN();
  void setISBN(const string &);
  bool const checkISBN(const string &);

  void showAuthors(string auth[]);
  void setAuthors(const string[]);
  bool const checkAuthor(const string[], int);

  double const showPrice();
  void setPrice(const double &);

  void setNumAuthor(int);

private:
  string title;
  string authors[4];
  string publisher;
  string isbn;
  double price;
  int copies;
  int numAuthors;
};

#endif