#include <stdio.h>
int main()
{
int a[100],n,i,s;
printf("Enter Number of Elements in Array:\n");
scanf("%d", &n);
printf("Enter numbers:\n");
for(i = 0; i < n; i++)
scanf("%d",&a[i]);
printf("Enter a number to search in Array:\n");
scanf("%d", &s);
for(i = 0; i < n; i++)
{

if(s==a[i])
{
printf ("number found %d" , i);
break;
}
}
if(i== n)
printf("number nt found");
return 0;
}