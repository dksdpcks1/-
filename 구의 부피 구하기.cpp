#include <stdio.h>
#include <math.h>

#define PI 3.141592

int main() {
	float r;
	printf("������ r�� ���ÿ� : ");
	scanf("%f",&r);
	printf("���� ���Ǵ� %f �Դϴ�.\n", 4.0*PI*pow(r,3)/3.0);
	return 0;
}
