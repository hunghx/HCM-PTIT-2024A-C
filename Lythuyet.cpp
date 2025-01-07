#include<stdio.h>
void changeA(int *a){
//	a = 100;
//	a++;
	*a = 100;
	(*a)++;
}
// ham chen gia tri theo vi tri
void insertByIndex(int *arr, int *size,int value,int index){
	for(int i = *size - 1; i>= index ; i--){
		*(arr+i+1)= *(arr+i);
	}
	
	*(arr+index) = value;
	(*size)++;
};

// Ham main() là ham bat dau chuong trinh
int main(){
	int array[100] = {1,2,3,4,5};
	int size = 5;
	
	// thuc hien them mói 1 gia tri vào vi tri bat ki trong mang 
	printf("Truoc khi chen : \n");
	for(int i =0; i< size; i++){
		printf("%d\t", *(array+i));
	}
	insertByIndex(array, &size, 10, 2);
	printf("\nSau khi chenc : \n");
	for(int i =0; i< size; i++){
		printf("%d\t", *(array+i));
	}
	// cu phap con tro : *(dereference) và &(reference)
	// cú phap khai báo 
	int *ptr; // khai báo 1 con tro int
	int a = 10;
//	a = 100;
//	a++;
	ptr = &a;
	changeA(ptr);
	
	// khai báo 1 con tro luu tru dia chi cua 1 con tro khac
	int **ptr2;
	ptr2 = &ptr;
	
	// kiem tra
	printf("Dia chi cua bien a la %p\n", &a);
	printf("Gia tri cua bien a la %d\n", a);
	printf("Con tro dang luu tru dia chi : %p\n", ptr);
	printf("Dia chi cua bien con tro ptr : %p\n", &ptr);
	printf("Gia tri cua o nho ma con tro dang tham chieu toi : %d\n", *ptr);
	printf("Con tro Ptr2 dang luu tru dia chi : %p\n", ptr2);
	printf("Dia chi cua bien con tro ptr2 : %p\n", &ptr2);
	printf("Gia tri cua bien a thong qua con tro ptr2 : %d\n", **ptr2);
	
	
	return 0;
}
