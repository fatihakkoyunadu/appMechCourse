#include <stdio.h>


float comparisonFunc(float a, float b, float c);
//main func.
int main() {

	//Local vars.
	float a = -80.00f;
	float b = 80.10f;
	float c = -80.11f;

	//////////////////////////////////////////////////////////////
	//User input
	// karþýlaþtýrýlacak sayý adedi
	// en büyük (1)	// en küçük (2) // ortalama (3)
	//////////////////////////////////////////////////////////////

	float fResult = comparisonFunc(a, b, c);
	printf("A: %10.2f \t B: %10.2f \t C: %10.2f \t\n\r", a, b, c);
	printf("Result: %10.2f \n\r", fResult);


	return (0);
}


float comparisonFunc(float a, float b, float c) {
	float result = 0.0f;

	//comp. if statement
	//
	if (a > b && a > c) {
		//dogruysa A en büyük
		result = a;
	}
	else if (b>c){
		//dogruysa B en büyük
		result = b;
	}
	else {
		//yanlýssa C en büyük
		result = c;
	}
	//printf("A: %10.1f \t B: %10.1f \t C: %10.1f \t\n\r", a, b, c);

	return result;
}