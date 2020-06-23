#include <iostream>
#include "dynamicArray.h"

using namespace std;

int main()
{
  DynamicArray<string> testArray(4, "One");
  cout << "The size of array: " << testArray.size() << endl;
  cout << "The Array is empty: " << testArray.is_empty() << endl;

  testArray.push_back("two");
  testArray.push_back("Three");
  testArray.push_back("four");
  testArray.push_back("Five");
  testArray.push_back("Six");
  testArray.push_back("Seven");
  testArray.push_back("Eight");
  testArray.push_back("Nine");
  testArray.push_back("Ten");


  cout << "The size of array before pop: " << testArray.size() << endl;
  cout << "The popped value: " << testArray.pop() << endl;
  cout << "The size of array atter pop: " << testArray.size() << endl;

  cout << "The last element of the array: " << testArray.back() << endl;
  cout << "The first element of the array: " << testArray.front() << endl;
  
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";

  cout << "Removed element at 2 index: " << testArray.removeAt(2) << endl;

  testArray.insertAt(4, "Tweleve");

  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  
  cout << "Index of Six: " << testArray.indexOf("Six") << endl;
  cout << "Removing an element Nine :" << testArray.remove("Nine") << endl;
  cout << "Array contains Ten: " << testArray.contains("Ten") << endl;
  
  cout << "Index of TT: " << testArray.indexOf("TT") << endl;
  cout << "Removing an element II:" << testArray.remove("II") << endl;
  cout << "Array contains TT: " << testArray.contains("TT") << endl;
  cout << "Element at index 3: " << testArray.at(3) << endl;
  // cout << "Element at index 13: " << testArray.at(13) << endl;
  // cout << "Removed element at 12 index: " << testArray.removeAt(12) << endl;
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  testArray.insertAt(testArray.size(), "Thirteen");
  for(int i = 0; i < testArray.size(); i++)
    cout << testArray.at(i) << " ";
  cout << "\n";
  // testArray.insertAt(14, 12);
}
