#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, sum = 0, n = 0;
    printf("Enter your number :");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i %  2 == 0)
        {
            sum += i;
            printf("%d sum += %d", i, sum);
        }
        printf("\n");
    }
    printf("Sum = %d", sum);
    return 0;
}
