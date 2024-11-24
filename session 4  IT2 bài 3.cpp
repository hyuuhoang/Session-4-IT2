#include<stdio.h>

int main(){
	int soNguyen;
	printf("nhap vao mot so nguyen ");
	scanf("%d",&soNguyen);
	
	if(soNguyen%3==0){
		printf("so ban nhap chia het cho 3\n");
	}else{
		printf("so ban nhap khong chia  het cho 3\n");
	}
	
	if(soNguyen%5==0){
		printf("so ban nhap chia het cho 5\n");
	}else{
		printf("so ban nhap khong chia het cho 5\n");
	}
	
	if(soNguyen%3==0&&soNguyen%5==0){
		printf("so ban nhap chia het cho ca 3 va 5\n");
	}else{
		printf("so ban nhap khong chia het cho ca 3 va 5\n");
	}
	return 0;	
}
