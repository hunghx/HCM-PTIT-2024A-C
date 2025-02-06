#include <stdio.h>
#include <stdlib.h>
const char *DATE_PATH = "C:\\Users\\AD\\CLionProjects\\untitled1\\data\\date.bin";
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Date{
    int day, month, year;
};

void readBinaryFile(){
    struct Date date[3] ;
    // thực hiên ghi ra file
    FILE *f = fopen(DATE_PATH,"rb");
    if(f==NULL){
        printf("Loi ko mo dc file");
        exit(1);
    }
//    while(fread(&date, sizeof(struct Date),1, f)!=0){
//        printf("%d/%d/%d\n", date.day,date.month,date.year);
//    }
    fread(date, sizeof (struct Date), 3, f);
    int i = 0;
    for(; i<3; i++){
        printf("%d/%d/%d\n", date[i].day,date[i].month,date[i].year);
    }
    fclose(f);
}
void writeBinaryFile(){
    struct Date today[3] = {
            {7,8,2025},
            {8,7,2024},
            {9,4,2025}
    }; // struct literal
    // thực hiên ghi ra file
    FILE *f = fopen(DATE_PATH,"wb");
    if(f==NULL){
        printf("Loi ko mo dc file");
        exit(1);
    }
    unsigned  long long status = fwrite(&today, sizeof(struct Date),3, f);
    if(status){
        printf("Ghi thanh cong");
    } else{
        printf("Ghi that bai");
    }
    fclose(f);
}

int main(int argc, char *argv[]) {
	// khi làm viêc voi FILE cân co thu vien nhap xuat stdio.h
	// Buoc 1 : Mo File
	// khai bao con tro lam viec voi file
//	FILE *file;
	// mo file
//    file = fopen("C:\\Users\\AD\\CLionProjects\\untitled1\\data\\data.bin","rb");
//	if(file == NULL){
//		// mo file that bai
//		printf("Loi mo file");
//		exit(1);
//	}
//	printf("Mo file thanh cong");
    // Bươc 2 : thực hiện các thao tác với du lieu trong file :
    // đọc dữ liệu  : Đọc từng dòng
//    char text[255] ;
//    int dem = 0;
//    char c ;
//    // doc ki tu : fgetc
//    while( (c = fgetc(file)) != EOF){
//        // in ra gia tri từng dong
////        printf("Dòng : %s\n", text);
//    printf("%c\n", c);
//        if(c == '\n'){
//            dem++;
//        }
//    };
//    printf("Dem = %d", dem);
//    int number ;
//    fprintf(file, "%d", number);
//    fscanf(file, "%d", &number);
//    fputs(text, file);
    // in ra ket qua
//    printf("%d", number);


// Doc ghi nhị phan : fread và fwrite
    int array[5];
//    unsigned long long status = fwrite(array, sizeof(int),5,file);
//    unsigned long long status =  fread(array, sizeof(int),5, file);
//    printf("Ket qua : %lld", status);

//    for(int i =0; i< 5; i++)
//        printf("\n%d", array[i]);
//    B3: đong file
//    fclose(file);

    // Cau truc



        // Kiem thu
//        writeBinaryFile();

readBinaryFile();
	return 0;
}
