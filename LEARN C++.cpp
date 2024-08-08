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

//Piggy Bank (after Quadratic Formula)
#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  // Pesos conversion rate: 0.00025
  // Reais conversion rate: 0.17
  // Soles conversion rate: 0.27 
  dollars = (0.00025 * pesos) + (0.17 * reais) + (0.27 * soles);
  std::cout << "US Dollars = $" << dollars;
}

//Magic 8-Ball(after Logical Operators)
#include <iostream>
#include <cstdlib>
int main() {

  // Your future is here
  std::cout << "MAGIC 8-BALL 🎱:\n";
  srand(time(NULL));
  int numberanswer = std::rand() % 20;
  std::cout << "🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱🎱";
  std::cout << "\n";
  std::cout << "The switch statement result: \n";
  switch (numberanswer) {
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "It is decidedly so.\n";
      break;
    case 2:
      std::cout << "Without a doubt.\n";
      break;
    case 3:
      std::cout << "You may rely on it.\n";
      break;
    case 4:
      std::cout << "It is decidedly so.\n";
      break;
    case 5:
      std::cout << "As I see it, yes.\n";
      break;
    case 6:
      std::cout << "Most likely.\n";
      break;
    case 7:
      std::cout << "Outlook good.\n";
      break;
    case 8:
      std::cout << "Yes.\n";
      break;
    case 9:
      std::cout << "Signs point to yes.\n";
      break;
    case 10:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 11:
      std::cout << "Ask again later.\n";
      break;
    case 12:
      std::cout << "Better not tell you now.\n";
      break;
    case 13:
      std::cout << "Cannot predict now.\n";
      break;
    case 14:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 15:
      std::cout << "Don't count on it.\n";
      break;
    case 16:
      std::cout << "My reply is no.\n";
      break;
    case 17:
      std::cout << "My sources say no.\n";
      break;
    case 18:
      std::cout << "Outlook not so good.\n";
      break;
    case 19:
      std::cout << "Very doubtful.\n";
      break;
  }
  srand(time(NULL));
  int answer = std::rand() % 20;
  std::cout << "\n";
  std::cout << "The if statement result: \n";
  if (answer == 0) {
    std::cout << "It is certain.";
  }
  else if (answer == 1) {
    std::cout << "Without a doubt.";
  }
  else if (answer == 2) {
      std::cout << "You may rely on it.";
  }
  else if (answer == 3) {
      std::cout << "Most likely.";
  }
  else if (answer == 4) {
      std::cout << "Yes.";
  }
  else if (answer == 5) {
      std::cout << "Ask again later.";
  }
  else if (answer == 6){
    std::cout << "Cannot predict now.";
  }
  else if (answer == 7) {
    std::cout << "Don't count on it.";
  }
  else if (answer == 8) {
      std::cout << "My sources say no.";
  }
  else {
      std::cout << "Very doubtful.";
  }
}

//Harry Potter Sorting Hat Quiz (after Magic 8-Ball)
#include <iostream>

int main() {

  // The magic starts here
  int gryffindor = 0;
  int ravenclaw = 0;
  int hufflepuff = 0;
  int slytherin = 0;
  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;
  std::cout << "=====================\n";
  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "=====================\n\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cin >> answer1;
  if (answer1 == 1) {
    hufflepuff += 1;
  }
  else if (answer1 == 2) {
    slytherin += 1;
  }
   else if (answer1 == 3) {
    ravenclaw += 1;
  }
  else if (answer1 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "You misunderstand me, magic-wielder. Shall we try again?\n";
  }
  std::cout << "Q2) Dawn or Dusk?\n\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n"; 
  std::cin >> answer2;
  if (answer2 == 1) {
    gryffindor += 1;
    ravenclaw += 1;
  }
  else if (answer2 == 2) {
    slytherin += 1;
    hufflepuff += 1;
  }
  else {
    std::cout << "You misunderstand me, magic-wielder. Shall we try again?\n";
  }
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cin >> answer3;
  if (answer3 == 1) {
    slytherin += 1;
  }
  else if (answer3 == 2) {
    hufflepuff += 1;
  }
   else if (answer3 == 3) {
    ravenclaw += 1;
  }
  else if (answer3 == 4) {
    gryffindor += 1;
  }
  else {
    std::cout << "You misunderstand me, magic-wielder. Shall we try again?\n";
  }
  std::cout << "Q4) Which road tempts you most?\n\n";
  std::cout << "  1) The cobbled street lined with ancient buildings\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The wide, sunny grassy lane\n";
  std::cin >> answer4;
  if (answer4 == 1) {
    ravenclaw += 1;
  }
  else if (answer1 == 2) {
    slytherin += 1;
  }
   else if (answer1 == 3) {
    gryffindor += 1;
  }
  else if (answer1 == 4) {
    hufflepuff += 1;
  }
  else {
    std::cout << "You misunderstand me, magic-wielder. Shall we try again?\n";
  }
  int max = 0;
  std::string house;
  if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";
}
