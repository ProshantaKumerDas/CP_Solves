#include<stdio.h>

int main()
{
    int val;
    char str[100],str2[100];
    gets(str);
    gets(str2);
    if(strcmpi(str,str2)==0)
    {
        val=0;
        printf("%d",val);
    }
    else if(strcmpi(str,str2)==1)
    {
        val=1;
        printf("%d",val);
    }
    else if(strcmpi(str,str2)==-1)
    {
        val=-1;
        printf("%d",val);
    }

    return 0;
}
