#include<stdio.h>

// Vùng nho tren RAM : Stack(ngan xep) và Heap(luu gia cua cac bien lau dai)
// khai bao hang so 
//#define MAX_SIZE = 10;
//const MAX = 10;


// nhap vao n de khoi tao mang co n so nguyen


int main(){
	int n;
	printf("Nhap so luong phan tu mang muon them ");
	scanf("%d",&n);
	
	// khai bao mang
	int arrayInt[n];
//	
//	printf(" gia tri cua o nho truoc array[0] 2 ô là  %d", *(arrayInt -2));
//	
	// nhap gia tri cho tung phan tu 
	for(int index = 0; index < n ; index++){
//		printf("%p  ",arrayInt[index]);
		printf("Nhap gia tri cho phan tu arrayInt[%d] = ",index);
		scanf("%d",arrayInt + index); // hay dung hon
	}
	
	
	arrayInt[4] = 100; // thay the gia tri cua phan tu trong mang
	
	// tinh tong và trung binh cong
	
	int sum = 0;
	for(int index = 0; index < n ; index++){
		sum+= arrayInt[index];
	}
	
	printf("\n Tong : %d", sum);
	printf("\n Trung bình : %.2f", ((float)sum)/n);
}
