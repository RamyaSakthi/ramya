#include <stdio.h>

int main()
{
    char a[10];
    int i;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i=i+2)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
        printf("%s",a);
        return 0;
    }
