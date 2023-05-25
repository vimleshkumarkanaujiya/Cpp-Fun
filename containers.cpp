#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <multimap>
#include <multiset>

using namespace std;

int main() {
  // Create a vector of integers.
  vector<int> v = {1, 2, 3, 4, 5};

  // Create a map of strings to integers.
  map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}};

  // Create an unordered map of strings to integers.
  unordered_map<string, int> um = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}};

  // Create a multimap of strings to integers.
  multimap<string, int> mm = {{"one", 1}, {"two", 2}, {"two", 3}, {"three", 3}, {"four", 4}, {"five", 5}};

  // Create a multiset of integers.
  multiset<int> ms = {1, 2, 3, 4, 5};

  // Print the contents of the vector.
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  // Print the contents of the map.
  for (auto pair : m) {
    cout << pair.first << " " << pair.second << endl;
  }

  // Print the contents of the unordered map.
  for (auto pair : um) {
    cout << pair.first << " " << pair.second << endl;
  }

  // Print the contents of the multimap.
  for (auto pair : mm) {
    cout << pair.first << " " << pair.second << endl;
  }

  // Print the contents of the multiset.
  for (int i : ms) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
