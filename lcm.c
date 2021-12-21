// C program to find LCM of a number

#include <stdio.h>

void main()
{
int a,b,c,i=0;
printf("Enter the two numbers \n");
scanf("%d%d", &a,&b);
c=a;

while(c%b!=0)
{
i++;
c=a*i;
}

printf("%d \n",c);
}
