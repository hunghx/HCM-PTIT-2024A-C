#include <stdio.h>


int main(){
	// FOR LOOP
	
	for (int i = 0,j = 1 ; i < 10 ; i++ , j +=2 ){
	// body loop
		if(i %2 == 1){
			continue;
		}
	
		printf("i = %d và j =%d \n", i,j);
	
	
	}
	printf("%d\n",i);

	
	
	
	
	// WHILE LOOP 
	
	int i = 10;
	while(i > 0){
	// body loop
		printf("i = %d \n",i);
		i--;
	}
	
	// DO ... WHILE
	do{
		printf("i = %d \n",i);
		i--;	
	}while(i>0);
	
	
	// yeu cau : hien thi menu chuc nang sau 
	// =========================MENU==========================
	// 1. Them moi hoc sinh
	// 2. Hien thi danh sach 
	// 3. CHinh sua thong tin
	// 4. Xoa sinh vien
	// 5. Thoat
	
	// bai tap

	do{
		int choice;
		printf("=========================MENU==========================\n");
		printf("1. Them moi hoc sinh\n");
		printf("2. Hien thi danh sach\n");
		printf("3. CHinh sua thong tin\n");
		printf("4. Xoa sinh vien\n");
		printf("5. Thoat\n");
		// nhap lua chon
		printf("Nhap lua chon cua ban : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				printf("Thoat chuong trinh \n");
				return 1;
			default:
				break;
		}
//		if(choice ==5){
//			break;
//		}
		
	}while(true);
//	
		// cau lenh nhay
		// break, continue , return
	
	
	return 0;
	
	
}
