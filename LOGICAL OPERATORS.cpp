//1/5
//Introduction to Logical Operators

//2/5
//Logical Operator: &&
#include <iostream>

int main() {
  
  int hunger = true;
  int anger = true;
  
  // Write the code below:
  if (hunger == true && anger == true) {
    std::cout << "Hangry";
  }
  
}

//3/5
//Logical Operator: II
#include <iostream>

int main() {
  
  int day = 6;
  
  // Write the code below:
  if (day == 6 || day ==7) {
    std::cout << "Weekend";
  }

}

//4/5
//Logical Operators: !
#include <iostream>

int main() {
  
  bool logged_in = false;
  
  // Write the code below:
  if (!logged_in) {
    std::cout << "Try again";
  }
  
}

//5/5
//Review
#include <iostream>

int main() {
  
  int year = 0;
  std::cout << "Enter a year: ";
  std::cin >> year;
  if (year < 1000 or year > 9999) {
    std::cout << "Invalid input.\n";
    }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

      std::cout << year << " is a leap year.\n";

    }
  else {

      std::cout << year << " is not a leap year.\n";

    }
  
}
