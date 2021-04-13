#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template <class elemType>
int seqSearch(const vector<elemType> &list, const elemType &item) {
  for (int i = 0; i < list.size(); i++) {
    if (list[i] == item)
      return i + 1;
  }
  return -1;
}

int main() {
  vector<int> v;

  int size;
  cout << "Enter the number of elements you want to enter: ";
  cin >> size;

  int elem;
  for (int i = 0; i < size; i++) {
    cin >> elem;

    v.push_back(elem);
  }
    cout << "Enter the number you want to search: ";
    cin >> elem;
  cout << seqSearch(v, elem);
  cout << endl;
}