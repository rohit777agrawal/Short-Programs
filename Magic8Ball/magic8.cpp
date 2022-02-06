#include <iostream>
#include <cstdlib>

int main(){

  //Your future is here
  std::cout << "MAGIC 8-BALL: \n";
  srand(time(NULL));
  int num = std::rand() % 10;
  std::cout << num << "\n";

  if(num == 0){
    std::cout << "It is certain.\n";
  }
  else if(num ==1){
    std::cout << "Without a doubt.\n";
  }
  else if(num ==2){
    std::cout << "Outlook good.\n";
  }
  else if(num ==3){
    std::cout << "Reply hazy, try again.\n";
  }
  else if(num ==4){
    std::cout << "Concentrate and ask again.\n";
  }
  else if(num ==5){
    std::cout << "My sources say no.\n";
  }
  else if(num ==6){
    std::cout << "Very doubtful.\n";
  }
  else if(num ==7){
    std::cout << "As I see it, yes.\n";
  }
  else if(num ==8){
    std::cout << "It is decidedly so.\n";
  }
  else if(num ==9){
    std::cout << "Most likely.\n";
  }
}