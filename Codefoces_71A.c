#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[101][101],str2[101][101], dec[100];
    int i,j,n,length;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s[^\n]",str[i]);
    }
    for(i=0;i<n;i++)
    {
       length=strlen(str[i]);
       if(length>10)
       {
           str2[i][0]=str[i][0];
           itoa(length-2,dec,10);
           if(length-2==9)
           {
               str2[i][1]=dec[0];
               str2[i][2]=str[i][length-1];
               str2[i][3]='\0';
           }
           else if(length-2>9){
                str2[i][1]=dec[0];
                str2[i][2]=dec[1];
                str2[i][3]=str[i][length-1];
                str2[i][4]='\0';
           }

       }
       else
       {
           strcpy(str2[i],str[i]);
       }
    }
    for(i=0;i<n;i++)
    {
       puts(str2[i]);
    }


    return 0;
}
