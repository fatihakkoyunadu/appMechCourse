#include <stdio.h>


float comparisonFunc(float a, float b, float c);
//main func.
int main(){
	
	//Local vars.
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;

	float fResult = comparisonFunc(a, b, c);
	//	printf("Result: %f\n\r", fResult);


	getchar();
	getchar();
	return (0);
}


float comparisonFunc(float a, float b, float c){
	float result = 0.0f;

	//comp. if statement
	//

	printf("A: %10.1f \t B: %10.1f \t C: %10.1f \t\n\r", a, b, c);
	
	return result;
}