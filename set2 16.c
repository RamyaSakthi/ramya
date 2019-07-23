#include<stdio.h>
int main()
{
    int n1,n2,i,c=0,j;
    scanf("%d %d",&n1,&n2);
    for(i=n1+1;i<n2;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
            c++;
        }
        }
    
    if(c==0)
    {
        printf("%d ",i);
    }
    }
    return 0;
}
