//FIrst Objective:
//I used to use Replit
#include <iostream>

int main() {
  
  std::cout << " GGG    CCC \n";
  std::cout << "G   G  C   C\n";
  std::cout << "G      C    \n";
  std::cout << "GGGGG  C    \n";
  std::cout << "G   G  C    \n";
  std::cout << "G   G  C   C\n";
  std::cout << " GGG    CCC\n";
}


//Dog Years (after VARIABLES.cpp)
#include <iostream>

int main() {
  //this is the age they asked me to put
  int dog_age = 6;
  int early_years,later_years,human_years;
  early_years = 21;
  //for the later years
  later_years=(dog_age-2)*4;
  //human years
  human_years = early_years + later_years;
  std::cout << "My name is Dog! Ruff ruff, I am " << human_years << " years old in human years.";
}

//Quadratic Formula (after Dog Years)
#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;
  double root1;
  double root2;
  root1 = (-b + std::sqrt(b*b-4*a*c))/(2*a);
  root2 = (-b - std::sqrt(b*b-4*a*c))/(2*a);
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}
