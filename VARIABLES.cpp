//1/10
//Introduction to Variables
//2/10
//Step 1: Declare a Variable
#include <iostream>

int main() 
{

  // Declare a variable
  int year;
    
  
}

//3/10
//Step 2: Initialize a Variable
#include <iostream>

int main() {
  
  // Declare a variable   
  int year;
  
  // Initialize a variable
  year = 2019;
   
}

//4/10
//Combining Step 1 and Step 2
#include <iostream>

int main() {

   int score = 0;
   
   // Declare and initialize a variable here
   int year = 2019;
   
   return 0;
   
}

//5/10
//Arithmetic Operators
#include <iostream>

int main() {

  int score = 0;

  // Change score here:
  score = 1234*99; 
  std::cout << score << "\n";
  


}

//6/10
//Chaining
#include <iostream>

int main() {
  
  int score = 0;
  
  // Output
  std::cout << "Player score: " << score << "\n";
   
}

//7/10
//User Input
#include <iostream>

int main() {
  
  int tip = 0;
  
  std::cout << "Enter tip amount: ";
  std::cin >> tip;
  std::cout << "You paid " << tip << " dollars\n";
  
  
}

//8/10
//Challenge: Temperature (Part 1)
#include <iostream>

int main() {
  double tempf = 84;
  double tempc;
  tempc = (tempf - 32) / 1.8;
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
  
  
  
}

//9/10
//Challenge: Temperature (Part 2)
#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit: ";
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}

//10/10
//Review
#include <iostream>

int main() {
  // Add your code below  
  double item_mass;
  double item_mars;
  std::cout << "How much does your item weigh? ";
  std::cin >> item_mass;
  item_mars = item_mass*3.72076;

  //Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.
  double distance_miles;
  double kmdistance;
  std::cout << "How far is your distance in miles? ";
  std::cin >> distance_miles;
  kmdistance = distance_miles * 1.60934;
}
