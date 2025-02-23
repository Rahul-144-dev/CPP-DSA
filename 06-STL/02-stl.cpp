#include <iostream>
#include <ostream>
#include <utility>
#include <vector>
using namespace std;
void explain_pair() {
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;
  pair<int, pair<int, int>> p2 = {1, {3, 4}};
  cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << arr[1].second << endl;
  return;
}
void explain_vector() {
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);
  vector<int> vc(5, 100);
  vector<int> v1(5);
  vector<int> v2(v1);
  return;
}
void learn_vector() {
  // vector<int> vec;
  // vec.push_back(1);
  // vec.push_back(2);
  // vec.push_back(4);
  // vec.push_back(3);
  // vec.emplace_back(9);
  // vec.push_back(5);
  // vec.pop_back(); // to remove the last element
  // for (int val : vec) {
  //   cout << val << " ";
  // }
  // cout << endl;
  // cout << "first element : " << vec.front() << endl; // to get the first
  // element cout << "last element : " << vec.back();           // to get the
  // last element cout << vec[2] << endl;//just like a normal array cout <<
  // "Size : " << vec.size() << endl; cout << "Capacity : " << vec.capacity() <<
  // endl;
  // vector<int> vec = {1, 2, 3, 4, 5};
  // // vec.pop_back();
  // vector<int> vec(4, 10);
  vector<int> vec1 = {1, 2, 3, 4, 5, 6};
  vector<int> vec2(5, 20);
  vector<int> vec3(vec2);
  for (int val : vec3) {
    cout << val << " ";
  }
}
void erase_vector() {
  vector<int> vec = {1, 2, 3, 4};
  vec.erase(vec.begin() + 1, vec.end() - 1);
  for (int val : vec) {
    cout << val << " ";
  }
  return;
}
int main() {
  // learn_vector();
  erase_vector();
  return 0;
}