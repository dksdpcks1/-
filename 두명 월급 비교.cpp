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
	
	printf("사원1의 이름을 입력하세용\n");
	scanf("%s",&name);
	
	printf("%s의 부서를 입력하세용\n",name);
	scanf("%s",&site);
	 
	printf("%s의 직위를 입력하세용\n",name);
	scanf("%s",&classes);
	
	printf("%s의 월급를 입력하세용\n",name);
	scanf("%d",&money);
	  
	printf("사원2의 이름을 입력하세용\n");
	scanf("%s",&name1);
	 
	printf("%s의 부서을 입력하세용\n",name1);
	scanf("%s",&site1);
	
	printf("%s의 직위을 입력하세용\n",name1);
	scanf("%s",&classes1);
	
	printf("%s의 월급를 입력하세용\n",name1);
	scanf("%d",&money1);
	 
	if(money>money1){
		printf("%s의 %s %s 의 월급이 %d이고  %s의 %s %s 의 월급이 %d 이므로 %s의 %s가 %d만큼 높습니다", site, classes, name, money, site1, classes1, name1,money1,site,name, money-money1);
	} 
	else if(money==money1){
		printf("%s 의 월급이랑 %s 의 월급이 같습니다",name, name1);
	}
	else{
		printf("%s의 %s %s 의 월급이 %d이고  %s의 %s %s 의 월급이 %d 이므로%s의 %s가  %d만큼 높습니다", site1, classes1, name1, money1, site, classes, name,money,site1,name1, money1-money);
	} 
}
