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
