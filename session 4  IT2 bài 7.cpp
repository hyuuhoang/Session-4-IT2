#include<stdio.h>
int main(){
	int namNhuan;
	printf("moi ban nhap vao so nam");
	scanf("%d",&namNhuan);
	
	if((namNhuan %4 == 0) && (namNhuan %100 != 0) || (namNhuan&400 == 0) )
		printf("nam nay la mot nam nhuan ",namNhuan);
	else
		printf("nam nay khong phai nam nhuan",namNhuan);
	return 0;	 
	}
