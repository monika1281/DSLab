#include<stdio.h>
int main()
{ 
int n, pos;
printf("enter array size: ");
scanf("%d",&n);
int a[100];
int i;
printf("enter array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("Array Elements are:");
for(i=0;i<n;i++)
{
 printf("%5d",a[i]);
}
printf("\nenter pos at which element has to be deleted:");
scanf("%d",&pos);
for(i=pos-1; i<=n-1; i++)
{
 a[i] = a[i+1];
 
 
}
n= n-1;
printf("New array:");
for(i=0;i<n;i++)
{
 printf("%5d",a[i]);
}
return 0;
}
