#include<stdio.h>

int main()
{
    int n,i,j,arr[1000][3];
    int one=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                one+=1;
            }
        }
        if(one>1)
        {
            count+=1;
        }
        one=0;
    }

    printf("%d",count);

    return 0;
}
