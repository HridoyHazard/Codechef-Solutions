#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,arr[100],i;
    int cnet=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i+1==n)break;
        if(arr[i]<arr[i+1])
        {
            cnet=abs(arr[i]-arr[i+1]);

        }
        printf("%d\n",cnet);
    }
}

