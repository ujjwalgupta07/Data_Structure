#include <iostream>
#include "dynamicArray.h"

using namespace std;

int main()
{
  DynamicArray<int> testArray(4,35);
  cout << "The size of array: " << testArray.size() << endl;
  cout << "The Array is empty: " << testArray.is_empty() << endl;

  testArray.push_back(5);
  testArray.push_back(4);
  testArray.push_back(9);
  testArray.push_back(2);
  testArray.push_back(0);
  testArray.push_back(1);
  testArray.push_back(6);
  testArray.push_back(7);
  testArray.push_back(3);


  cout << "The size of array before pop: " << testArray.size() << endl;
  cout << "The popped value: " << testArray.pop() << endl;
  cout << "The size of array atter pop: " << testArray.size() << endl;

  cout << "The last element of the array: " << testArray.back() << endl;
  cout << "The first element of the array: " << testArray.front() << endl;
  
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";

  cout << "Removed element at 2 index: " << testArray.removeAt(2) << endl;

  testArray.insertAt(4, 12);

  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  
  cout << "Index of 1: " << testArray.indexOf(1) << endl;
  cout << "Removing an element 6 :" << testArray.remove(6) << endl;
  cout << "Array contains 9: " << testArray.contains(9) << endl;
  
  cout << "Index of 19: " << testArray.indexOf(19) << endl;
  cout << "Removing an element 61:" << testArray.remove(61) << endl;
  cout << "Array contains 19: " << testArray.contains(19) << endl;
  cout << "Element at index 3: " << testArray.at(3) << endl;
  // cout << "Element at index 13: " << testArray.at(13) << endl;
  // cout << "Removed element at 12 index: " << testArray.removeAt(12) << endl;
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  testArray.insertAt(testArray.size(), 12);
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  // testArray.insertAt(14, 12);
}
