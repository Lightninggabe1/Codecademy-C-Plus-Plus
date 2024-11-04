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

//4/7: Tenth Power
#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {
  return pow(num, 10);
}

int main() {
  
  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";
  
}

//5/7: First Three Multiples
#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector <int> first_three_multiples(int num) {
   std::vector <int> n = {num, num*2, num*3};
   return n;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
