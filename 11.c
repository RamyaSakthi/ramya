#include <stdio.h>

int main()
{
    int i,j,n1,n,n2;
    scanf("%d %d",&n1,&n2);
    n=n1;
    for(i=1;i<n2;i++)
{
    n1=n*n1;
}
printf("%d",n1);

    return 0;
}
