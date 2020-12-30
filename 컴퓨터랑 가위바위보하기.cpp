#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char * hand[] = { NULL , "가위", "바위", "보" };

int main()
{
	srand((unsigned)time(NULL));

	int user, computer;
	printf("가위 : 1, 바위 : 2, 보 : 3, 종료 : 0\n");

	while (1) {
		computer = rand() % 3 + 1;

		printf("선택 >> ");
		scanf("%d", &user);

		if (user == 0) return 0;

		if (user == computer) {
			printf("\n비겼습니다. ( Computer : %s vs %s : User)\n\n", hand[user], hand[computer]);
			continue;
		}
			
		switch (computer)
		{
		case 1:
			if ( user != 2) printf("\n이겼습니다.");
			else printf("\n졌습니다.");
			break;

		case 2:
			if (user != 3) printf("\n이겼습니다.");
			else printf("\n졌습니다.");
			break;

		case 3:
			if (user != 1) printf("\n이겼습니다.");
			else printf("\n졌습니다.");
			break;
		}

		printf("(Computer : %s vs %s : User)\n\n", hand[user], hand[computer]);
	}
} 
