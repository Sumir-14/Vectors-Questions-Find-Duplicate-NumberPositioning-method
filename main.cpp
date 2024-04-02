#include <iostream>
#include <vector>
using namespace std;

// Function to find the duplicate element in a vector
int findDuplicate(vector<int> &numbers) {
  // Iterate through the vector until the element at index 0 is equal to 
  // the element at the index stored in that element
  while (numbers[0] != numbers[numbers[0]]) {
    // Swap the element at index 0 with the element at the index 
    // stored in the element at index 0
    swap(numbers[0], numbers[numbers[0]]);
  }
  // Return the element at index 0
  return numbers[0];
}

int main() {
  // Create a vector of integers
  vector<int> numbers = {1, 3, 4, 3, 2};

  // Find the duplicate element in the vector(Function call)
  int duplicate = findDuplicate(numbers);

  // Print the duplicate element
  cout << duplicate << endl;
  return 0;
}