//1/7: How It Works

//2/7: Introduction
#include <iostream>

// Define introduction() here:
void introduction(std::string first_name, std::string last_name) {
  std::cout << last_name << ", " << first_name << " " << last_name;
}

int main() {
  
  introduction("Beyonce", "Knowles");
  
}

//3/7: Average
#include <iostream>

// Define average() here:
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int main() {
  
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1.0, 2.0) << "\n";
  
}
