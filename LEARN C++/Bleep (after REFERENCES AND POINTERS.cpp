#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. We eat the flower part of the broccoli. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. Broccoli is still edible when you use your hands.";
  bleep(word, text);
  
  for (int i = 0; i < text.size(); i++) {
    
    std::cout << text[i];
    
  }
  
  std::cout << "\n";
}
