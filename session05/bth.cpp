//T�nh t?ng c?a c�c s? nguy�n t? 1 d?n N (N nh?p t? ngu?i d�ng) v� in ra k?t qu?.
//In ra c�c s? nguy�n t? 1 d?n N (N nh?p t? ngu?i d�ng) theo th? t?.
//In ra c�c s? ch?n t? 1 d?n N
//T�nh giai th?a c?a s? N

#include <stdio.h>


int main(){
	int N, sum = 0, giaiThua = 1;;
		printf("Nhap N = : ");
		scanf("%d",&N);
		
		// 1 . s? d?ng for
		for(int i = 1 ; i <=N; i++){
			sum = sum + i;
		}
		
		printf("Tong  : %d\n", sum);
		// 2. v�ng lap for
		for(int i = 1 ; i <=N; i++){
		printf("%d, ",i);
		}
		printf("\n");
		// 3 . forr
		for(int i = 1 ; i <=N; i++){
			if(i %2 ==0){
				printf("%d, ",i);
			}
		}
		printf("\n");
		
		// 4. tinh gia thua : N ! = 1.2.3.4.5.... .N;
		
		for(int i = 1 ; i <=N; i++){
			giaiThua *= i;
		}
		printf("Giai thua  : %d\n", giaiThua); // tran vung nho 
		
		
	return 0;
}

