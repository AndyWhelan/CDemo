#include <stdio.h>

/* print Fahrenheit-Celcius table, but using functions
	for fahr = 0 20, ..., 300; floating-point version */
float fahrFromCelc(float);	// convert celcius to fahrenheit

int main(){

	float fahr, celcius;
	int lower, upper, step;

	lower = -60;	// lower limit of temperature table
	upper = 160;	// upper limit
	step = 20;	// step size

	celcius = lower;

	printf("TEMPERATURE CONVERSION TABLE\n  C     F\n");
	while (celcius <=upper){
		fahr = fahrFromCelc(celcius);
		printf("%3.0f %6.1f\n",celcius,fahr);
		celcius = celcius+step;
	}
}

float fahrFromCelc(float tempC){
	return((9.0/5.0) * tempC +32.0);
}
