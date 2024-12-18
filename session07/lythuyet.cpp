
#include<stdio.h>

// cu phap khai bao mang tinh
// mang 1 chieu cac so nguyen
int arrayInt[10]= {1,2,3};
int size = 3;
// mang 2 chieu
int array2DInt[5][3] = { {1,2,1}, {3,4,-6} , {5,6,7} , {7,8,1} , {9,10,3}};
//  { {1,2}, {3,4} , {5,6} , {7,8} , {9,10}}  index mang ben ngoai  = 2, index c?a mang ben trong là 0

// array2DInt[2][0]

int main(){
//	printf("%d", array2DInt[2][0]); // 5
	
	
	// bieu dien mang 2 chieu trong matran 
	 // matran 
	 1 1 1 1 
     1     1 
     1     1
     1 1 1 1
	
	//  su dung vong lap  for i 
		for(int i = 0; i < 5 ; i++){
			for(int j = 0; j <3 ; j++){
				printf("%d ", array2DInt[i][j]);
			}
			printf("\n");
		}
		
	// cu phap tinh kich thuc mang : so luong toi da mang mang co the luu tru duoc
	int maxSize = sizeof(arrayInt) / sizeof(arrayInt[0]);
	
	printf("\n size  =%d\n", maxSize);
	
	
	for(int i = 0; i < size ; i++){
		
		printf("%d, ", arrayInt[i]);
	}
	
}



