#include<stdio.h>

void bubblesort(long long int n,long long int arr[])
{
    
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    int i;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }


    bubblesort(n,arr);

    for(i=0;i<n;i++)
    {
        printf("%lld ",arr[i]);
    }
}