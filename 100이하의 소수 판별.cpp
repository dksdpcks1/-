#include <stdio.h>
int main(void){
	int a = 0;
	printf("100������ ������ �Է��ϼ���\n");
	scanf("%d",&a);
	for(int j=2; j<=100;)
	if(a%j==0){
		if(a==j){
			printf("�Ҽ�");
		}
		else
		{
			printf("�Ҽ��ƴ�");
			
		 } 
		 break; 
	} else{
		j++;
	}
}
