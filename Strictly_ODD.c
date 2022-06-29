#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int c=0,c1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if( i%2!=0 and  a[i]%2!=0)
        {
            c+=1;
        }
        if(a[i]%2!=0)
        {
            c1+=1;
        }
    }
    if(c==c1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}