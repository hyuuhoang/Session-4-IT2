#include<stdio.h>
int main(){
	int so;
	printf("moi ban nhap so ban muon");
	scanf("%d",&so);
	
	if(so > 0){
		printf("so ban nhap la so duong"); 
	} else{
		printf("so ban nhap la so am"); 
	} 
	return 0; 
}
