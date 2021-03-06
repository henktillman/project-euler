/* Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
find the sum of the even-valued terms. */

#include <iostream>
using namespace std;

int main()
{
  // Seed values for the sequence
  int x = 1, y = 2;

  // Running total starts at 2 because one of the seed values is even
  int total = 2;

  // Fibonacci limit
  int lim = 4000000;

  // Every third fibonacci number is even
  // Counter to keep track of this pattern
  int everyThird = 1;

  // Continue the sequence while x, y, and their sum are less than the limit
  while (x < lim && y < lim && x+y < lim)
  {
    // Complete the actual formula for the sequence
    int tmp = x + y;
    x = y;
    y = tmp;
    // If we've reached the third number it must be even
    if (everyThird == 3)
    {
      // Add it to the running total
      total += y;
      // Reset the counter
      everyThird = 1;
    }
    // Otherwise increment the counter
    else
      everyThird++;
  }

  // Print out the ending total
  cout << total << endl;
  return 0;
}