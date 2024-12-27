#include<stdio.h>
#define MAX 100

int array[MAX];
int n = 0;

void inputArray();
int sumArray();
float averageArray();
void printResults(int sum, float avg);

int main(){
	// nhap mang
	inputArray();	
	return 0;	
}
void inputArray(){
	int sum ;
	float avg;
	//  nhâp n
	printf("Nhap so luong phan tu cho mang n = ");
	scanf("%d", &n);
	// nhap lan luot gia tri cho mang
	for(int i=0; i<n;i++){
		printf("Array[%d] = ",i);
		scanf("%d", array+i);
	}
	
	// tính tong va trung binh
	sum = sumArray();
	avg = averageArray();
	
	// in ra
	printResults(sum, avg);
};
int sumArray(){
	int sum = 0;
	for(int i=0; i<n;i++){
		sum+= array[i];
	}
	return sum;
};
float averageArray(){
	float avg = (float)sumArray()/n;
	return avg;
};
void printResults(int sum, float avg){
	printf("Tong cua cac phan tu trong mang la %d\n", sum);
	printf("trung binh cong cua cac phan tu trong mang la %.2f\n",avg);
};
