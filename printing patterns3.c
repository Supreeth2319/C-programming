#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    printf("enter the value of N");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
