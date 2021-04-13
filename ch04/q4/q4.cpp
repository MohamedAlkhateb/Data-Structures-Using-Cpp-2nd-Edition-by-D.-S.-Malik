#include "algorithm"
#include "iostream"
#include "iterator"
#include "vector"
#include <iterator>

using namespace std;

template <class elemType> void reverseVector(vector<elemType> &list) {
  vector<int> temp(list.size());
  copy(list.rbegin(), list.rend(), temp.begin());
  list = temp;
}
int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  ostream_iterator<int> screan(cout, " ");
  reverseVector(v);
  copy(v.begin(), v.end(), screan);
  cout << endl;
}