#include<stdio.h>
int main()
{
    int n,x=0,i;
    char str[150][3];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",str[i]);
    }

    for(i=0;i<n;i++)
    {
        if(str[i][0]=='+' && str[i][1]=='+')
        {
            x++;
        }
        if(str[i][1]=='+' && str[i][2]=='+')
        {
            x++;
        }
        if(str[i][0]=='-' && str[i][1]=='-')
        {
            x--;
        }
        if(str[i][1]=='-' && str[i][2]=='-')
        {
            x--;
        }
    }
    printf("%d",x);

    return 0;
}
