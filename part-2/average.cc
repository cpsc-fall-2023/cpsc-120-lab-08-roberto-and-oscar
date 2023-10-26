// Oscar Sanchez
// ofsanchez696@csu.fullerton.edu
// @ofsanchez696
// Partners: @rob11029

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "Error: you must supply at least one number\n";
    return 1;
  }
  double sum{0.0};
  int count{0};
  double avg{0.0};
  bool first = true;

  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      sum += std::stod(argument);
      count++;
    }
  }
  avg = sum / count;
  std::cout << "average = " << avg << "\n";

  return 0;
}
