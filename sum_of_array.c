#include <stdio.h>
int main()
{
int a[10],i,n,sum=0;

printf("Enter array size : ");
scanf("%d",&n);

printf("Enter the elements of array : \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    sum = sum + a[i];
}
printf("The sum of the array is :%d",sum);

return 0;
}

