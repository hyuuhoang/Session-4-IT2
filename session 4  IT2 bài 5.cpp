#include<stdio.h>
int main(){
	int so1, so2, so3;
	printf("moi ban nhap so nguyen thu nhat ");
	scanf("%d",&so1);
	printf("moi ban nhap so nguyen thu hai ");
	scanf("%d",&so2);
	printf("moi ban nhap so nguyen thu ba ");
	scanf("%d",&so3);
	
	if(so1 < so3 && so3  < so2){
		printf("so thu 3 nam trong giua so 1 và so 2");
	}else{
		printf("so thu 3 khong nam trong giua so 1 va so 2"); 
	}
	return 0;	
}
