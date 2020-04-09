#include <stdio.h>

int main(){

	int arr1[10];

	for (int i = 0; i < 10; i++)
		arr1[i] = i*10;

	for (int i = 0; i < 10; i++){

		//if (i == 3) continue; //cancel one cycle
		//if (i >= 5 ) break; //cancel the loop
		printf("Loop Val: %i- %i \n\r",i, arr1[i]); // \n ->newline \r ->return
	}

	getchar();
	getchar();
}