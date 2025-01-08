#include <stdio.h>

void changeIndex(int a[],int *newValue,int *changeIndex);
void inMang(int a[],int *n);

int main(){
	int n=5;
	int a[n] = {2,4,6,8,10};
	printf("Mang truoc khi cap nhat: ");
	inMang(a,&n);
	int newValue=99,Index=2;
	changeIndex(a,&newValue,&Index);
	printf("\nMang sau khi cap nhat: ");
	inMang(a,&n);
}

void changeIndex(int a[],int *newValue,int *Index){
	a[*Index-1] = *newValue;
}

void inMang(int a[],int *n){
	for(int i=0;i<*n;i++){
		printf("%d ",*(a+i));
	}
}
