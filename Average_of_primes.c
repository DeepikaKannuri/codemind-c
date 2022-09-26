#include<stdio.h>
int is_prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    else{
        int x=0;
        for(int  i=2;i<=n/2;i++)
        {
            if(n%i==0)
            x++;
        }
        if(x==0)
        {
            return 1;
        }
        return 0;
    }
}
int main()
{
    int n,sum=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(is_prime(arr[i]))
        {
            sum+=arr[i];
            count++;
        }
    }
    printf("%.2f",(sum*1.0)/(count*1.0));
}