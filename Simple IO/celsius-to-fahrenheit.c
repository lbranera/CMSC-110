#include <stdio.h>

int main(){
	float c;
	printf("Enter Celsius: ");
	scanf("%f", &c);
	
	float f = (1.8*c) + 32;
	
	printf("Fahrenheit: %f", f);
	
	return 0;
}
