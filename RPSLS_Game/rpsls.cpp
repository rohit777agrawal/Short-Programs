/* The logic:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors. */

#include <iostream>
#include <stdlib.h>

int main(){

  srand(time(NULL));
  int computer = rand()%3 +1;
  int user =0;

std::cout << "==========================================\n";
std::cout << "rock paper scissors lizard spock!\n";
std::cout << "==========================================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 👽\n\n";
std::cout << "shoot! ";

int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;

std::cin >> user;

std::cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
    std::cout << "Rock crushes Scissors.\n";
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    std::cout << "Scissors cuts Paper.\n";
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    std::cout << "Paper covers Rock.\n";
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
    std::cout << "Lizard poisons Spock.\n"; 
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
    std::cout << "Spock smashes Scissors.\n"; 
    std::cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
    std::cout << "Scissors decapitate Lizard.\n";  
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
    std::cout << "Lizard eats Paper.\n"; 
    std::cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
    std::cout << "Paper disproves Spock.\n";  
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
    std::cout << "Spock vaporizes Rock.\n";  
    std::cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
    std::cout << "Rock crushes Lizard.\n";  
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
    std::cout << "Thought same huh!";  
    std::cout << "It's a Tie!\n";
      
  } else { 
    std::cout << "You Lose!\n";   
  }


}