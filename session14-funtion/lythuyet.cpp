#include<stdio.h>

// khai bao ham
//kieu_du_lieu ten_ham();
// ham tinh tong 2 so
int sum(int a, int b);
int minus(int a, int b);
int swap(int c, int d);
int swapArray(int arr[]);

int isPrime(int number);
int ktraSoHoanHao(int number);
 
int main(){
	// tinh tong 3 + 5 
	// tham so : parameters 
	// doi so : arguments
	printf("tong 3 + 5 = %d\n ", sum(3,5));
	
	// truyen doi so cho tham so trong ham
	// truyen tham tri : truyen giá tri cho tham so
	// truyen tham chieu : truyen dia chi cho tham so
	
	int a = 100;
	int b = 10;
	// goi ham swap
	swap(a,b);
	
	printf("a = %d va b =%d \n", a,b); // a =100 , b= 10 | a =10 , b=100
	
	
	int arr[] = {2,10};
	swapArray(arr);
	
	printf("arr0 = %d va arr1 =%d \n", arr[0],arr[1]); 

	// tao ham kiem tra 1 so truyen vao co phai so nguyen to ko : return 0|1
	// tao ham kiem tra so hoan hao truyen vao : return 0|1
	
	printf("%d \n", isPrime(91));
	printf("%d \n", ktraSoHoanHao(28));
	return 0;
	
}

int isPrime(int number){
	if(number<2){
		return 0;
	}
	for(int i =2 ;i*i <= number;i++){
		if(number%i ==0){
			return 0;
		}	
	}
	return 1;
};

int ktraSoHoanHao(int number){
	// tong cac uoc tru chinh no = chinh no
	int sum = 0;
	for(int i = 1; i<= number/2;i++){
		if(number % i ==0){
			sum+=i;
		}	
	}
	return sum == number;
};

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;	

}

int swapArray(int arr[]){
	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
};

int sum(int a, int b){
	return a+b;	
}

int minus(int a, int b){
	return a - b;
};
