#include<stdio.h>
#include<math.h>

int main(){
	int chieuDai,chieuRong;
//	float chuVi;
	long dienTich;
	scanf("%d%d",&chieuDai,&chieuRong);
	float chuVi=(float)((chieuDai+chieuRong)/2);
	dienTich=chieuDai*chieuRong;
	printf("%f",&chuVi);
	printf("\n%l",&dienTich);
}
