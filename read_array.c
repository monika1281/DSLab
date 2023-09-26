#include<stdio.h>
int main()
{ 
int n;
printf("enter array size: ");
scanf("%d",&n);
int a[n];
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

return 0;
}



