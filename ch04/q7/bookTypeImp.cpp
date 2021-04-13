#include "bookType.h"

bookType::bookType(string ti, string pub, string auth[], int na, string ISBN,
                   double pri, int cop) {
  setTitle(ti);
  setPublisher(pub);
  numAuthors = na;
  setAuthors(auth);
  setISBN(ISBN);
  setPrice(pri);
  setCopies(cop);
}

string const bookType::showTitle() { return title; }

void bookType::setTitle(const string &ti) { title = ti; }

bool const bookType::checkTitle(const string &ti) { return title == ti; }

int const bookType::showCopies() { return copies; }

void const bookType::setCopies(const int &cop) {
  if (cop >= 0)
    copies = cop;
  else
    copies = 0;
}

string const bookType::showPublisher() { return publisher; }

void bookType::setPublisher(const string &pub) { publisher = pub; }

string const bookType::showISBN() { return isbn; }

void bookType::setISBN(const string &ISBN) { isbn = ISBN; }

bool const bookType::checkISBN(const string &ISBN) { return isbn == ISBN; }

void bookType::showAuthors(string auth[]) {
  for (int i = 0; i < numAuthors; i++) {
    auth[i] = authors[i];
  }
}

void bookType::setAuthors(const string auth[]) {
  if (numAuthors == 0) {
    for (int i = 0; i < numAuthors; i++) {
      authors[i] = "";
    }
  } else {
    for (int i = 0; i < numAuthors; i++) {
      authors[i] = auth[i];
    }
  }
}

bool const bookType::checkAuthor(const string auth[], int nAuth) {
  if (numAuthors != nAuth)
    return false;

  for (int i = 0; i < 4; i++) {
    if (auth[i] != authors[i]) {
      return false;
    }
  }

  return true;
}

double const bookType::showPrice() { return price; }
void bookType::setPrice(const double &pr) {
  if (pr >= 0) {
    price = pr;
  }
  price = 0;
}

void bookType::setNumAuthor(int n) {
  if (n >= 0) {
    numAuthors = n;
  } else {
    numAuthors = 0;
  }
} //Error