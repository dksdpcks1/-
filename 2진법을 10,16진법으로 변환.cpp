#include <stdio.h>
 int main() {
 char input[100] ;
 printf("\n 2������ �Է��ϼ��� : ");
 scanf("%s", &input);
 
 int cnt = 0;
 int length = 0;
 char value[100];
 while(input[cnt]!=0 && input[cnt] < 100)
 {
 	if(input[cnt]>='0' && input[cnt]<='1')
 	{
 		value[cnt] = input[cnt] -'0';
 		length++;
	 }
	 cnt++;
 }
 printf("\n 2���� %d �ڸ��� �Է� �Ǿ����ϴ�\n ",length);
 printf("�Է¹��� 2������: ");
 for(int i = 0; i<length; i++){
 	printf("%d",value[i]);
 }
 printf("�Դϴ�. \n\n");
 int result = 0;
 if(length>0)
 {
 	for(int i = 0; i<(length); i++)
 	{
 		if(value[i]==1)
 		{
 			result += (1<<((length-1)-i));
		 }
	 }
  } 
 printf("�й� : 20161508  �̸� : �� �̸� ");
 
 printf("2������ 10������(16����)�� ��ȯ�� ����� : %d(0x%X)", result,result);
}
