#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter 10 integers:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);
        printf("%d ", num);
    }

    return 0;
}
