#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    float mean=0;
    int arr[50],weight[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&weight[i]);
        sum=sum+weight[i];
    }
    int xi=0;
    for(i=0;i<n;i++)
    {
        xi=xi+(arr[i]*weight[i]);
    }
    mean=xi/(float)sum;
    printf("%.1f",mean);
 
    return 0;
}
