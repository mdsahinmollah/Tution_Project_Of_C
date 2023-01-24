#include <stdio.h>
int main()
{
int a[10],i,n,m=0;

printf("Enter array size : ");
scanf("%d",&n);

printf("Enter the elements of array : \n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    if(m<a[i])
    {
      m=a[i];
    }
}
printf("The largest value of the array is :%d",m);

return 0;
}
