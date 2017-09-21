#include <iostream>
#include <stdio.h>
int main(){
	int firstNumber;
	int secondNumber;
	
	std::cout <<"Give me your numbers fool! \n";
	std::cin >> firstNumber;
	std::cout <<"Good, just one moooore \n";
	std::cin >> secondNumber;
	std::cout <<"This is the addition of them: ";
	std::cout<<firstNumber+secondNumber;
	std::cout<<"\nThis is the multiplication of them: ";
	std::cout<<firstNumber*secondNumber;
	std::cout<<"\n";
	/*
	printf("Give me your numbers fool!\n");
	std::cin>>firstNumber;
	printf("Give me your second number!\n");
	std::cin>>secondNumber;
	printf("This is the addition of them: %i \n", firstNumber+secondNumber);
	printf("This is the multiplication: %i \n %i % i", firstNumber*secondNumber);
	*/
}
