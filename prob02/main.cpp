// This program calculates the user's pay.

#include <iostream>

int main()
{
  double amount, rate, pay;

  // Get the number of hours worked.
  std::cout << "How many candy bars did you sell? ";
  std::cin >> amount;

  // Get the hourly pay rate.
  std::cout << "How much do the organization earn for each bar sold? ";
  std::cin >> rate;

  // Calculate the pay.
  pay = amount * rate;

  // Display the pay.
  std::cout << "Congratulations! You have earned $" << pay << " for the organization!" << std::endl;

  return 0;
}
