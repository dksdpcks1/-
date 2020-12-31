#include <stdio.h>
#include <stdlib.h>

int getGCD(int a, int b)
{
	int ans = 1;
	for (int i = 1; i <= a; i++)
		if (!(a % i) && !(b % i))
			ans = i;
	return ans;
}

int main()
{
	int* arr = NULL;
	int n, gcd;

	scanf("%d", &n);
    // 동적할당
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	gcd = arr[0];
	
    // 최대공약수 구하기
	for (int i = 1; i < n; i++)
		gcd = getGCD(gcd, arr[i]);

    // 약수 출력
	for (int i = 1; i <= gcd; i++)
		if (gcd % i == 0)
			printf("%d ", i);

	free(arr);

	return 0;
} 
