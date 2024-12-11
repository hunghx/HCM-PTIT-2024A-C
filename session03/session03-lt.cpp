#include <stdio.h>
#include <stdlib.h>

int main(){
	// XUat du lieu voi ham printf
	
	printf("Hien thi gia tri cua 1 so nguyen \n%-5s %-10s %-3s %-10s\n","100","5.4","C","Hunghx");
		
	// Hàm putchar : dat 1 ky tu vao doi tuong stdout
	putchar('H');
	putchar('S');
	putchar('T');
	// ham scanf 
	
	
	
	
	int d;
	float f;
	scanf("%f",&f);
	printf("\n gia tri vua nhap la : %f",f);
	// nhap 7.5;
	// ki tu ma stdin luu tru cuoi cung : \n
	
	// Làm the nao de nhap chuoi : gets, puts
	//	char[] name = "abc"
	
	// hàm getChar() 
	
//	fflush(stdin);
	char c ;
	c = getchar(); // lay ki tu dau tin doc duoc trong stdin
	printf("\n gia tri vua nhap la : %c",c);
	
	return 0;
}
