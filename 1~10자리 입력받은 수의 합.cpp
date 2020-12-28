#include <stdio.h>

int main()
{
    int input, sum = 0;
    scanf("%d", &input);
    while (1)
    {
        if( input == 0)
            break;
        sum = sum + input % 10;
        input = input / 10;
    }
    printf("%d\n", sum);
       
    return 0;
}
