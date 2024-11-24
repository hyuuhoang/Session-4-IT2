#include<stdio.h>

int main(){
	int soNguyen;
	printf("nhap vao mot so nguyen");
	scanf("%d",&soNguyen);
	
	if(soNguyen %2==0){
		printf("so ban nhap la so chan");
	} else{
		printf("so ban nhap la so le");
	}
	return 0;
} 
