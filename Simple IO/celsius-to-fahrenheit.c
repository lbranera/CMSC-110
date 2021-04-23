#include <stdio.h>

int main(){
	float c;
	print("Enter Celsius: ");
	scanf("%f", &c);
	
	float f = (1.8*c) + 32;
	
	print("Fahrenheit: %f", f);
	
	return 0;
}
