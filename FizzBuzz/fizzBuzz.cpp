#include<iostream>

int main(){

    for(int i =1; i<=100; i++){
        if((i%3) == 0){
            std::cout << "Fizz";
            if((i%5)== 0){
                std::cout << "Buzz\n";
            }
            else{
                std::cout << "\n";
            }
        }
        else if((i%5) == 0){
            std::cout << "Buzz";
            if((i%3)== 0){
                std::cout << "Fizz\n";
            }
            else{
                std::cout << "\n";
            }
        }
        else{
            std::cout << i << "\n";
        }

    }
}