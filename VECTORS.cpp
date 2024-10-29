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

//5/8: Adding and Removing Elements 
#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> last_jedi;
  
  // Add characters here:
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  
  
  std::cout << last_jedi[0] << " ";
  std::cout << last_jedi[1] << " ";
  std::cout << last_jedi[2] << " ";
  std::cout << last_jedi[3] << " ";
  
}

//6/8: .size()
#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Artichoke");
  grocery.push_back("Tomato");
  
  std::cout << grocery.size();
  
  
}

//7/8: Operations
#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  double total = 0.0;
  // Calculate the total using a for loop:
  for (int i=0; i<delivery_order.size(); i++){

    total += delivery_order[i];
  }
  std::cout << "Total: $" << total << "\n";
  
  
  
  
  
  
  
}
