#include <stdio.h>

int main()
{
    int N,A,D,t,s=0,i;
    scanf("%d %d %d",&N,&A,&D);
    t=A;
    for(i=0;i<N;i++)
    {
        s=s+t;
        t=t+A;
    }
    printf("%d",s);
    return 0;
}
