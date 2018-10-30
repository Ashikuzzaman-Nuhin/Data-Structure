#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int arr[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
