#include <iostream>
#include <stdio.h>

int main(){
	char miniNumber;
	short int mediumNumber;
	long int largeNumber;
	
	miniNumber=127;
	printf("char max: %i\n", miniNumber);
	miniNumber=miniNumber+10;
	printf("char overflow by 10: %i\n", miniNumber);
	
	mediumNumber=32767;
	printf("int max: %i\n", mediumNumber);
	mediumNumber=mediumNumber+10;
	printf("int overflow by 10: %i\n", mediumNumber);
	
	largeNumber=2147483647;
	std::cout << "long int max: " << largeNumber << std::endl;
	//printf("char max: %f\n", largeNumber);
	largeNumber=largeNumber+10;
	//printf("char overflow by 10: %f\n",largeNumber);
	std::cout << "long int overflow by 10: " << largeNumber << std::endl;
}
