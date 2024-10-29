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



//Rock, Paper, Scissors, Lizard, Spock (after Harry Potter Sorting Hat Quiz)


//Rock > Scissors; Rock > Lizard
//Lizard > Spock; Lizard > Paper
//Spock > Rock; Spock > Scissors
//Scissors > Paper; Scissors > Lizard
//Paper > Spock; Paper > Rock
/*
Rock Paper Scissors Lizard Spock Game
(From The Big Bang Theory)
*/
#include <iostream>
#include <stdlib.h>
int main() {
  
  // Live long and prosper
  srand (time(NULL));
  
  int computer = rand() % 3 + 1;

  int user = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cin >> user;
  std::cout << "Shoot! \n";
  std::cout << "You: " << user << "\n";
  std::cout << "Computer: " << computer << "\n";
  if (user == 1 && computer == 2) {
    std::cout << "The computer won!\n";
  }
  else if (user == 1 && computer ==1) {
    std::cout << "It is a tie!\n";
  }
  else if (user == 2 && computer ==2) {
    std::cout << "It is a tie!\n";
  }
  else if (user == 3 && computer ==3) {
    std::cout << "It is a tie!\n";
  }
  else if (user == 1 && computer ==3) {
    std::cout << "You win!\n";
  }
  else if (user == 3 && computer ==2) {
    std::cout << "You win!\n";
  }
  else if (user == 2 && computer ==1) {
    std::cout << "You win!\n";
  }
  else if (user == 2 && computer ==3) {
    std::cout << "The computer won!\n";
  }
  else if (user == 3 && computer ==1) {
    std::cout << "The computer won!\n";
  }
  //Rock > Scissors; Rock > Lizard
  //Lizard > Spock; Lizard > Paper
  //Spock > Rock; Spock > Scissors
  //Scissors > Paper; Scissors > Lizard
  //Paper > Spock; Paper > Rock
  /*
  Rock Paper Scissors Lizard Spock Game
  (From The Big Bang Theory)
  */
  // Live long and prosper
  srand (time(NULL));
  
  int computerrpsls = rand() % 5 + 1;

  int userrpsls = 0;
  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🤏\n";
  std::cout << "5) 👈\n";
  std::cin >> userrpsls;
  std::cout << "Shoot! \n";
  //Userrpsls == Rock
  if (userrpsls == 1 && computerrpsls ==1) {
    std::cout << "You: ✊\n";
    std::cout << "Computer: ✊\n";
    std::cout << "It is a tie!\n";
  }
  else if (userrpsls == 1 && computerrpsls == 2) {
    std::cout << "You: " << userrpsls << " ✊\n";
    std::cout << "Computer: " << computerrpsls << " ✋\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 1 && computerrpsls == 5) {
    std::cout << "You: " << userrpsls << " ✊\n";
    std::cout << "Computer: 👈\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 1 && computerrpsls ==3) {
    std::cout << "You: ✊\n";
    std::cout << "Computer: ✌️\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 1 && computerrpsls == 4) {
    std::cout << "You: ✊\n";
    std::cout << "Computer: 🤏\n";
    std::cout << "You win!\n";
  }
  //Userrpsls == Paper
  else if (userrpsls == 2 && computerrpsls == 2) {
    std::cout << "You: ✋\n";
    std::cout << "Computer: ✋\n";
    std::cout << "It is a tie!\n";
  }
  else if (userrpsls == 2 && computerrpsls == 1) {
    std::cout << "You: ✋\n";
    std::cout << "Computer: ✊\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 2 && computerrpsls == 5) {
    std::cout << "You: ✋\n";
    std::cout << "Computer: 👈\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 2 && computerrpsls ==3) {
    std::cout << "You: ✋\n";
    std::cout << "Computer: ✌️\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 2 && computerrpsls ==3) {
    std::cout << "You: ✋\n";
    std::cout << "Computer: 🤏\n";
    std::cout << "The computer won!\n";
  }
  //Userrpsls == Scissors
  else if (userrpsls == 3 && computerrpsls ==3) {
    std::cout << "You: ✌️\n";
    std::cout << "Computer: ✌️\n";
    std::cout << "It is a tie!\n";
  }
  else if (userrpsls == 3 && computerrpsls ==1) {
    std::cout << "You: ✌️\n";
    std::cout << "Computer: ✊\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 3 && computerrpsls == 5) {
    std::cout << "You: ✌️\n";
    std::cout << "Computer: 👈\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 3 && computerrpsls ==2) {
    std::cout << "You: ✌️\n";
    std::cout << "Computer: ✋\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 3 && computerrpsls ==2) {
    std::cout << "You: ✌️\n";
    std::cout << "Computer: 🤏\n";
    std::cout << "You win!\n";
  }
  //Userrpsls == Lizard
  else if (userrpsls == 4 && computerrpsls ==5) {
    std::cout << "You: 🤏\n";
    std::cout << "Computer: 👈\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 4 && computerrpsls == 3) {
    std::cout << "You: 🤏\n";
    std::cout << "Computer: ✌️\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 4 && computerrpsls ==2) {
    std::cout << "You: 🤏\n";
    std::cout << "Computer: ✋\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 4 && computerrpsls ==1) {
    std::cout << "You: 🤏\n";
    std::cout << "Computer: ✊\n";
    std::cout << "The computer won!\n";
  }
  //Userrpsls == Spock
  else if (userrpsls == 5 && computerrpsls ==4) {
    std::cout << "You: 👈\n";
    std::cout << "Computer: ✊\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 5 && computerrpsls == 3) {
    std::cout << "You: 👈\n";
    std::cout << "Computer: ✌️\n";
    std::cout << "You win!\n";
  }
  else if (userrpsls == 5 && computerrpsls ==2) {
    std::cout << "You: 👈\n";
    std::cout << "Computer: ✋\n";
    std::cout << "The computer won!\n";
  }
  else if (userrpsls == 5 && computerrpsls ==1) {
    std::cout << "You: 👈\n";
    std::cout << "Computer: 🤏\n";
    std::cout << "The computer won!\n";
  }
}

//Fizz Buzz (after LOOPS.cpp)
#include <iostream>

int main() {

  // Brain explodes here:
  for (int i = 1; i <= 100; i++) {

    if (i % 15 == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if (i % 3 == 0) {
      std::cout << "Fizz\n";
    } 
    else if (i % 5 == 0) {
      std::cout << "Buzz\n";
    } 
    else {
      std::cout << i << "\n";
    }

}
}

//Build a Text Adventure (after ERRORS.cpp)
#include <iostream>

int main() {

    std::string gender = "";
    std::cout << "Are you a: 1) male or a 2) female? ";
    std::cin >> gender;
    if (gender == "2") {
      gender = "witch";
    }
    else if (gender == "1") {
      gender = "wizard";
    }
    std::cout << "\n\n";
    std::cout << "⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯";
    std::cout << "\n\n The Dark Ages have begun. You are a aspiring young " << gender << " living in the medieval town of Stratford-upon-Avon. \n";
    std::cout << "Most people don't hunt wizards; some coexist with witches. However, the Institut d'anti-sorcellerie, who has crossed over from France, is against the practice of magic.\n";
    std::cout << "One day, you come across the queer young boy whose name is Edard, one who people usually avoid.\n";
    std::string choice1 = "";
    std::cout << "\n'The Institut dost approach,' he says. You have two choices now. You can warn the other wizards, lessening your escape time; or you can run and save yourselves.\n";
    std::cout << "Which option will you take? Warn? or run?";
    std::cin >> choice1;
    for (int i =0; i=1;){
      if (choice1 == "Run" or "run" or "RUn" or "rUn"){
        std::string choice2bracket1 = "";
        std::cout << "You and Edard ran from the village, leaving the village behind.\n";
        std::cout << "However, as you do so, the knights rush closer, so you have no chance of escaping that way. Thus, you return to the town.\n";
        std::cout << "You have two choices, tell them, or don't.";
        std::cin >> choice2bracket1;
        if (choice2bracket1 == "tell" or "Tell" or "Tell them" or "tell them"){
          i++;
        }
        else if (choice2bracket1 == "don't tell" or "Don't tell" or "dont tell" or "Dont tell"){
          std::cout << "You don't tell them but they find out anyway. You are caught by the wizards and banished. \n\n\n\n";
          std::cout << "You got the ending 'Banished!' 🎉🎉🎉🎊🎊🎊🎊🎊🎉🎉🎉";
          return 0;
        }
        else{
          std::cout << "Invalid input. Please enter 'Tell', 'tell', 'Dont tell' or 'Don't tell'";
        }
      }
    }
    std::cout << "\n You warned the others about the approaching Institut. 'What?' Rolf exclaims. 'Disapparate! Quickly!' the wizard mayor says. 'Shall not the Muggles take heed?' shouted an elderly woman.\n\n";
    std::cout << "'Cursed be those Muggles! Disapparate!' Cracks of sound erupt as minors go with elders for Side-Along-Apparition, bachelors disappear, and Muggles look out of their windows.";
    
    std::string choice2 = "";
    std::cout << "You have two choices now. You can Disapparate into another town, or Disapparate into a grassland. Which do you choose? Grassland? or town?\n";
    std::cin >> choice2;
}



//Whale Talk (after VECTORS.cpp)
#include <iostream>
#include <vector>
#include <string>

int main() {

  // Whale, whale, whale.
  // What have we got here?
  std::string input = "a WhALe of a deal!";
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  vowels.push_back('A');
  vowels.push_back('E');
  vowels.push_back('I');
  vowels.push_back('O');
  vowels.push_back('U');

  std::vector<char> result; 
  for (int i=0; i < input.size(); i++){
    for (int j=0; j < vowels.size(); j++){
      if (input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
    if (input[i] == 'u' || input[i] == 'e') {
      result.push_back(input[i]);
    }
    if (input[i] == '!' || input[i] == '?' || input[i] == '.' || input[i] == ',') {
      result.push_back(input[i]);
    }
  }
  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];   
  }
}
