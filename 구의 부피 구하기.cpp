#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
	float r;
	printf("반지름 r을 쓰시오 : ");
	scanf("%f",&r);
	printf("구의 부피는 %f 입니다.\n", 4.0*PI*pow(r,3)/3.0);
	return 0;
}
