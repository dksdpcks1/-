#include <stdio.h>

int main()
{
	char name[4];
	char site[10];
	char classes[10];
	char name1[10];
	char site1[10];
	char classes1[10];
	int money=0;
	int money1=0; 
	
	printf("���1�� �̸��� �Է��ϼ���\n");
	scanf("%s",&name);
	
	printf("%s�� �μ��� �Է��ϼ���\n",name);
	scanf("%s",&site);
	 
	printf("%s�� ������ �Է��ϼ���\n",name);
	scanf("%s",&classes);
	
	printf("%s�� ���޸� �Է��ϼ���\n",name);
	scanf("%d",&money);
	  
	printf("���2�� �̸��� �Է��ϼ���\n");
	scanf("%s",&name1);
	 
	printf("%s�� �μ��� �Է��ϼ���\n",name1);
	scanf("%s",&site1);
	
	printf("%s�� ������ �Է��ϼ���\n",name1);
	scanf("%s",&classes1);
	
	printf("%s�� ���޸� �Է��ϼ���\n",name1);
	scanf("%d",&money1);
	 
	if(money>money1){
		printf("%s�� %s %s �� ������ %d�̰�  %s�� %s %s �� ������ %d �̹Ƿ� %s�� %s�� %d��ŭ �����ϴ�", site, classes, name, money, site1, classes1, name1,money1,site,name, money-money1);
	} 
	else if(money==money1){
		printf("%s �� �����̶� %s �� ������ �����ϴ�",name, name1);
	}
	else{
		printf("%s�� %s %s �� ������ %d�̰�  %s�� %s %s �� ������ %d �̹Ƿ�%s�� %s��  %d��ŭ �����ϴ�", site1, classes1, name1, money1, site, classes, name,money,site1,name1, money1-money);
	} 
}
