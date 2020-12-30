#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char * hand[] = { NULL , "����", "����", "��" };

int main()
{
	srand((unsigned)time(NULL));

	int user, computer;
	printf("���� : 1, ���� : 2, �� : 3, ���� : 0\n");

	while (1) {
		computer = rand() % 3 + 1;

		printf("���� >> ");
		scanf("%d", &user);

		if (user == 0) return 0;

		if (user == computer) {
			printf("\n�����ϴ�. ( Computer : %s vs %s : User)\n\n", hand[user], hand[computer]);
			continue;
		}
			
		switch (computer)
		{
		case 1:
			if ( user != 2) printf("\n�̰���ϴ�.");
			else printf("\n�����ϴ�.");
			break;

		case 2:
			if (user != 3) printf("\n�̰���ϴ�.");
			else printf("\n�����ϴ�.");
			break;

		case 3:
			if (user != 1) printf("\n�̰���ϴ�.");
			else printf("\n�����ϴ�.");
			break;
		}

		printf("(Computer : %s vs %s : User)\n\n", hand[user], hand[computer]);
	}
} 
