#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],l,i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Enter the values a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                l=a[i];
                a[i]=a[j];
                a[j]=l;
            }
        }
    }
    printf("Third Largest Number:%d",a[i]);
    getch();
}