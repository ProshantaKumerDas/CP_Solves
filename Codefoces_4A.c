#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);  // Input an integer
    if(w%2==0 && w!=2)  //Checking Conditions
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}
