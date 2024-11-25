#include <stdio.h>
int main(){
	int chiSoCu, chiSoMoi;
	double giaTien = 0;
	printf("Moi ban nhap vao so cong to dien dau thang ");
	scanf("%d", &chiSoCu);
	printf("Moi ban nhap vao so cong to dien cuoi thang ");
	scanf("%d", &chiSoMoi);
	
	double soDien = chiSoMoi - chiSoCu;
	printf("So dien tieu thu cu ban la %.3lf kWh \n", soDien);
	if(soDien < 0){
		printf("Chi so cu phai lon hon chi so moi");
	}if(soDien <= 50){
		giaTien = soDien*10.000;
	}else if(soDien <= 100){
		giaTien = 50*10.000 + ( soDien - 50) * 15.000;
	}else if(soDien <= 150){
		giaTien = 50*10.000 + 50*15.000 + (soDien-100)*20.000;
	}else if(soDien<=200){
		giaTien = 50*10.000 + 50*15.000 + 50*20.000 + (soDien-150)*25.000;
	}else{
		giaTien = 50*10.000 + 50*15.000 + 50*20.000 + 50*25.000 + (soDien-200)*30.000;
	}
	printf("Tien dien ban phai thanh toan la %.3lf VND", giaTien);
	return 0;
}
