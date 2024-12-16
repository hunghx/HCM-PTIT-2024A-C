#include<stdio.h>

int main(){
	
//	float dtb = 6.3;
//	if(dtb < 6.5){
//	// khoi ma thuc thi neu dieu kien dung
//		printf("Yeu");
//	}else if(dtb < 7){
//			printf("trung binh");
//	}else if(dtb< 8){
//		printf("Kha");
//	}else if(dtb < 9){
//			printf("GIoi");
//	}else{
//			printf("Xuat sac");
//	}
//	
	
//	if(dtb < 6.5){
//			printf("Yeu");
//	}else{
//		if(dtb < 7){
//			printf("trung binh");	
//		}else{
//			if(dtb< 8){
//				printf("Kha");
//			}else{
//				if(dtb < 9){
//					printf("GIoi");
//				}else{
//					printf("Xuat sac");
//				}
//			}
//		}
//	}	
//	
	
	// swith case
	// so sanh lua chon nguoi dung nhpa vao 1->5
	
	int choice;
	printf("nhap lua chon cua ban 1- 5 ?");
	scanf("%d",&choice);
	switch(choice){ // char, int, float
		case 1: 
			//truong hop 1
			printf("Ng??i dung chon so 1");
			break;
		case 2:
		case 7:
		case 9: 
			//truong hop 2
			printf("Ng??i dung chon so 2,7,9");
			break;
		case 3: 
			// truong hop 3
			printf("Ng??i dung chon so 3");
			break;
		case 4: 
			// truong hop 4
			printf("Ng??i dung chon so 4");
			break;
		case 5: 
			// truong hop 5
			printf("Ng??i dung chon so 5");
			break;
		default :
			// ko r?i vào bat cu truong hop nao
			printf("Ng??i dung chon so khong phu hop");
			break;
					
			
		
	}
//	printf("\n%d", false);
	
	
	// kiem tra so cham
	// if else
	if(choice %2 ==0){
		printf("\nchoice là so chan");
		printf("\nLuy thua bac 2 %d ",choice * choice);
	}else{
		printf("\nchoice la so le");
		printf("\nLuy thua bac 3 %d ",choice * choice * choice);
	}
	
	printf("%s",(choice %2 ==0)?"chia het cho 2":"ko chia het cho 2");
	
	
	
	
	return 0;
	
	
	
	
	
	
	}
