#include <stdio.h>

int main(){
	int a,b,c, sum;
	float avg;
	// Cách 1 :
	// nhap du lieu
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	printf("Nhap c = ");
	scanf("%d",&c);
	
	// thuc hien tinh tong va trung binh cong
	sum = a+b+c;
	avg = sum/3.0; // sai ket qua : 4.00
	
	
	printf("Tong 3 só là %d\n",sum);
	printf("Trung binh cong 3 só là %.2f\n",avg);
	
	
	
	// Cach 2
	// nhap 3 so 
//	printf("Nhap 3 so a, b, c");
//	scanf("%d%d%d",&a,&b,&c);
//	
//	printf("Tong 3 só là %d\n",a+b+c);
//	printf("Trung binh cong 3 só là %.2f\n",(a+b+c)/3.0);
//	return 0;
	
	}
