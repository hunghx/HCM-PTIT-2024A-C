#include<stdio.h>

int main(){
	// tao ma tran m x n trong do m là so hang , n là so cot 
	// cho nguoi dung nhap lan luot tung gia tri tung ma tran và hien thi ma tran ra man hinh
	int m,n;
//	printf("Hay nhap so hang cua ma tran m : ");
//	scanf("%d",&m);
	printf("Hay nhap so cot cua ma tran n : ");
	scanf("%d",&n);
	int matrix[n][n];
	for(int i = 0 ; i<n ; i++ ){
		for(int j = 0 ; j<n ; j++ ){
			printf("Nhap matrix[%d][%d] : ",i,j);
			scanf("%d", &matrix[i][j]);
		}	
	}
	printf("Các phan tu trong ma tran là :\n");
	
	for(int i = 0 ; i<n ; i++ ){
		for(int j = 0 ; j<n ; j++ ){
			printf("%d ",matrix[i][j]);
		}	
		printf("\n");
	}
	
	
	// bai toan : hay cho nguoi dung nhap
	int sum = 0;
	for(int i = 0 ; i<n ; i++ ){
		for(int j = 0 ; j<n ; j++ ){
			if(i == 0 || i == n-1 ||j ==0 || j==n-1){
				sum += matrix[i][j];
				printf("%d ",matrix[i][j]);
			}else{
				printf("  ");
			}
		
		}	
		printf("\n");
	}
	
	printf("Tong cac phan tu trne canh bien la : %d\n", sum);
	int sum1 =0;
	for(int i = 0 ; i<n ; i++ ){
		for(int j = 0 ; j<n ; j++ ){
			if(i>=j){
				sum1 += matrix[i][j];
				printf("%d ",matrix[i][j]);
			}else{
				printf("  ");
			}
		
		}	
		printf("\n");
	}
	printf("Tong cac phan tu tên và nua duoi duong cheo chinhn la : %d\n", sum1);
	
	
	
	int a=1, b=2;
	a = 4;
	printf("%d",a);
	return 0;	
}
