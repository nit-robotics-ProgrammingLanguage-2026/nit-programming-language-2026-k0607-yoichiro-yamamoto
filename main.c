#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int j;
    int count=0;
    scanf("%d", &n);
    for(i=0; i<=50; i++)
    {
        for(j=0; j<=50; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(i+j==n)
            {
                count++;
            }
        }
        
    }
    if (n<0)/* TODO: 課題0607 */
    printf("NG");
    else
    printf("%d", count);
    return 0;
}
