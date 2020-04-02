#include <stdio.h>

//ilk ekran mesajlari
void initMessage(void);
//get values
void getValues(void);
//Toplam fonk.
int sum(int sumVal1, int sumVal2);
//calculate death rate
float deathRateCalc(float deathNumber, float caseNumber);

struct numbers {
	float val1;
	float val2;
} num;

int main(){

	initMessage();	//ilk mesaj fonk.
	getValues();	//read val. from user
	int sumFuncResult = sum(num.val1, num.val2);	//calculate the result
	printf("Toplam sonucu: %d", sumFuncResult);
	
	float deathRateFuncResult = deathRateCalc(num.val1, num.val2);	//calculate the result
	printf("\n\r Death Rate Result: %%%.2f", deathRateFuncResult);

	getchar();
	getchar();
	return (0);
}

//ekran mesajlari
void initMessage(void) {

	printf("Degerleri giriniz\n\r");
}

//degerleri oku fonk.
void getValues(void){
	printf("Sayi biri giriniz\n\r");
	scanf("%f", &num.val1);
	printf("Sayi ikiyi giriniz\n\r");
	scanf("%f", &num.val2);
}

//Toplama fonk.
int sum(int sumVal1, int sumVal2){
	
	int sumResult = sumVal1 + sumVal2;

	return sumResult;
}

//calculate death rate
float deathRateCalc(float deathNumber, float caseNumber){
	
	float deathRate = (deathNumber / caseNumber) * 100;

	return deathRate;
}