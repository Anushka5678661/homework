
#include<stdio.h>
int main()
{
    int i,j,n,space;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    space=n/1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" ");
        }
        space--;
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1) || i==(n/2)+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}