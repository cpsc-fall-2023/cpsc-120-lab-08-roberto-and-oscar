// TODO: Add the required header

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 2) {
    std::cout << "Error: you must supply three arguments\n";
    return 1;
  }
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  double count {0.0};
  for (int x = 0; x < arguments.size(); x++) {
    sum += std::stoi(arguments[x]);
    count++;
  }
  sum = sum / count;
  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  std::cout << "average = " << sum << "\n"; 
  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
