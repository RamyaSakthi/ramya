# include<stdio.h>
int main()
{
    int n,t,c=0,i,r,a=1,s=0,n1,n2,j;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
 n=i;
    t=i;
    c=0;
    while(n)
    {
        c++;
        n=n/10;
    }
    while(t)
    { a=1;
        r=t%10;
     for(j=0;j<c;j++)
        {
        
    a=a*r;
        }
        s=s+a;
        t=t/10;
    }
    if(s==i)
    {
        printf("%d",i);
    }
    s=0;
    }

    return 0;

}
