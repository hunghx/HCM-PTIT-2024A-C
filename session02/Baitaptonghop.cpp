// Tinh chi so BMI 
// Can nang : kg -> float
// chieu cao : m -> float
// BMI = cannang / chieucao^2 -> float
#include<stdio.h> // thu vien cung cap ham nhap va xuat
#include<math.h>


int main(){
	float weight, height , bmi;
	weight = 80;
	height = 1.8;
	bmi = weight / pow(height,2);
	printf("Chi so BMI cua thay Hung la %.2f \n",bmi);
	return 0;
}
