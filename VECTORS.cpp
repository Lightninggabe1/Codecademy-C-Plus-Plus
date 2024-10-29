//1/8: Introduction to Vectors

//2/8: Creating a Vector
#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult;
  
  // Declare another vector here:
  std::vector<double> subway_child;
    
  
}

//3/8: Initializing a Vector
#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult = {800, 1200, 1500};
  
  // Give subway_child some values:
  
  std::vector<double> subway_child = {400, 600, 750};

}

//4/8: Index
#include <iostream>
#include <vector>

int main() {
   
  std::vector<double> subway_adult = {800, 1200, 1500};
  
  std::vector<double> subway_child = {400, 600, 750};
  
  // What number at index 2 of subway_child?
  std::cout << subway_child[2];
  
  
}
