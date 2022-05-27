#include <stdio.h>

/* print Fahrenheit-Celcius table
	for fahr = 0 20, ..., 300; floating-point version */

int main(){

	float fahr, celcius;
	int lower, upper, step;

	lower = -60;	// lower limit of temperature table
	upper = 160;	// upper limit
	step = 20;	// step size

	celcius = lower;

	printf("TEMPERATURE CONVERSION TABLE\n  C     F\n");
	while (celcius <=upper){
//		celcius = (5.0/9.0) * (fahr-32.0);
		fahr = (9.0/5.0) * celcius +32.0;
		printf("%3.0f %6.1f\n",celcius,fahr);
		celcius = celcius+step;
	}
}
