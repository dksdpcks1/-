#include <stdio.h>
int main(void){
	int a = 0;
	printf("100이하의 정수를 입력하세요\n");
	scanf("%d",&a);
	for(int j=2; j<=100;)
	if(a%j==0){
		if(a==j){
			printf("소수");
		}
		else
		{
			printf("소수아님");
			
		 } 
		 break; 
	} else{
		j++;
	}
}
