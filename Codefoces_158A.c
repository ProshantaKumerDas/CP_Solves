#include<stdio.h>
int main()
{
    int i,n,k,val;
    int arr[100];
    int count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    val=arr[k-1];
    if(val==0)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]>val && arr[i]!=0)
            {
                count++;
            }
        }
    }
    else if(val!=0)
    {
        count=k;
        for(i=k;i<n;i++)
        {
            if(arr[i]>=val)
            {
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}
