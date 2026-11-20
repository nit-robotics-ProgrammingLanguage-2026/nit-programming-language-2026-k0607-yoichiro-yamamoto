#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    for (int i = 0; i <= 50; i++)
    {
        int j = n - i;

        if (j >= 0 && j <= 50 && i != j)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}