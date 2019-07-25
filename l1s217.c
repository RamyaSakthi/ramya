
#include <stdio.h>
int main()
{
    int n,t,c=0,i,r,a=1,s=0;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        c++;
        n=n/10;
    }
    n=t;  a=1;
        r=t%10;
        fo
    while(t)
    {
      r(i=1;i<=c;i++)
        {
            a=a*r;
        }
        s=s+a;
        t=t/10;
    }
    if(n==s)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
