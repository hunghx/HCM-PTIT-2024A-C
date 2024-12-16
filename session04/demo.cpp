#include<stdio.h>
#include<math.h>
int main(){
	// vi du hay tim nghiem cua phuong tirnh bac 2
	// cos bao nhieu truong hop 
	// th1 : delta < 0 -> pt vo nghiem
	// th2 : delta = 0-> pt cos nghiem kep x1 =x2 = -b/2a
	// th3 : delta > 0 -> pt co 2 nghiem rieng biet x1,x2 = (-b +- can delta) / 2a
	
	//  if else if 
//	float a,b,c;
//	// nhap a,b,c
//	scanf("%f%f%f",&a,&b,&c);
//	
//	// tinh delta
//	float delta = b*b - 4*a*c;
//	
//	if(delta < 0){
//		printf("\n PT voo nghiem");
//	}else if(delta == 0){
//		printf("\npt co nghiem kep x = %.2f",(-b)/2*a);
//	}else{
//		printf("\npt co nghiem x1 = %.2f",(-b-sqrt(delta))/(2*a));
//		printf("\npt co nghiem x2 = %.2f",(-b+sqrt(delta))/(2*a));
//	}


// baitap tong hop

// Ði?m t? 90 d?n 100: "Xu?t s?c" : diem >=90 && diem <=100
// Ði?m t? 80 d?n 89: "Gi?i"      : diem >=80 && diem <90
// Ði?m t? 70 d?n 79: "Khá"		:   diem >=70 && diem <80
// Ði?m t? 60 d?n 69: "Trung bình" :diem >=60 && diem <70
// Ði?m du?i 60: "Y?u"           : 	diem >=0 && diem <60
	
	int diem ;
	printf("nhap diem tong ket \n");
	scanf("%d",&diem);
	
	if(diem <0 || diem >100){
		printf("diem phai tu 0 -> 100");
	}else{
		if(diem >=90){
			printf("Xuat sac");
		}else if(diem >=80){
			printf("Gioi");
		}else if(diem >=70){
			printf("Kha");
		}else if(diem >=60){
			printf("Trung binh");
		}else{
			printf("yeu");
		}
	}


	return 0;
}
