#include<stdio.h>
// Pham vi su dung : ben ngoai
int x = 10;
int y = 100;
int a,b,c,d;
int number = 100;
float real = 10.95;
char kiTu = 'A';

// ten chuan
float scoreMath = 9.7;
const float PI = 3.14; // constant

int main() {
//	printf("number : %d %d %d %d \n",a,b,c,d); // ngau nhien gias trij cuar
	// cacs bieens cos sawnx trong chuowng trinh
//	printf("Real : %f",real);
//	printf("Char : %c",kiTu);

// toan tu : logic
// &&
	int condition1 = number % 7 == 0; // 0 the hien cua gia tri sai va kha 0 thi la dung
	int condition2 = number % 5 == 0;

// kiem tra xem number co chia het cho ca 5 vaf 7 hay khong
	int condition3 = condition1 && condition2;
	printf("Ket qua %d", condition3);
// toan tu : ||
// kiem tra xem number co chia het cho ca 5 hoac 7 hay khong
	int condition4 = condition1 || condition2;
	printf("Ket qua %d", !condition4);
// toan tu : !

// toan tu hang :
 // 	i += 2 <=> i = i + 2 ;
 // toan tu ++, --
 
  // tang x len 1 don vi
  //x=10
 	printf("\nKet qua x = %d", x++); // hauto x++ =10
 	//x = 11;
 	printf("\nKet qua x = %d", ++x);  // tiento ++x = 12
 	// x = 12;
 	y = x++ + ++x + x++ + ++x; // 42 ? 44 
 	printf("\nKet qua y = %d", y); 
 	 // char, int , float , double
 	 double diem = 99999.7; 
 	 int round = (int) diem; // co the bi tran vung nho
 	printf("\nKet qua x = %d", round); 
 	 
 	
 	
	return 0;
	
}

