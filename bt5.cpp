#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 50

struct sinhVien{
	int id;
	char name[20];
	int age;
	char phoneNum[20];
};

typedef struct sinhVien sinhVien;
void showSVList(sinhVien arr[],int sizeSVList);
void fixIFSV(sinhVien arr[],int sizeSVList);

int main(){
	int sizeSVList=5;
	sinhVien arr[max] = {
		{1,"Le Thanh Hien", 21,"0987654321"},
		{2,"Tran Thanh Tam",27,"0987654321"},
		{3,"Nguyen Van Tu",32,"0987654321"},
		{4,"Thai Thanh Hao",60,"0987654321"},
		{5,"Tran Thanh",50,"0987654321"},
	};
	
	printf("Danh sach sinh vien truoc khi sua:\n");
	showSVList(arr,sizeSVList);
	
	fixIFSV(arr,sizeSVList);
	
	printf("Danh sach sinh vien sau khi sua:\n");
	showSVList(arr,sizeSVList);
}

void showSVList(sinhVien arr[],int sizeSVList){
	printf("==============================================\n");
	printf("|%-5s%-20s%-5s%-15s|\n","ID","Name","Age","Phone Number");
	printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
	for(int i=0;i<sizeSVList;i++){
		printf("|%-5d%-20s%-5d%-15s|\n",arr[i].id,arr[i].name,arr[i].age,arr[i].phoneNum);
		printf("=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n");
	}
}

void fixIFSV(sinhVien arr[],int sizeSVList){
	int fixID;
	printf("Nhap vao ID sinh vien ban can sua: ");	
	scanf("%d",&fixID);
	fflush(stdin);
	
	for(int i=0;i<sizeSVList;i++){
		if(arr[i].id == fixID){
			sinhVien fixIF;
			fixIF = arr[i];
			printf("Nhap vao ten sinh vien can sua: "); 
			gets(fixIF.name);
			printf("Nhap vao tuoi sinh vien can sua: ");	
			scanf("%d",&fixIF.age);
			fflush(stdin);
			
			arr[i] = fixIF;
			return;
		}
	}
	
	printf("ID sinh vien khong ton tai!");
}
