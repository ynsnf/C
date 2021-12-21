// C program to print multiplication table

#include<stdio.h>
int main()
{
int num,i;
printf("Enter a number for a multiplication Number \n");
scanf("%d",&num);
for(i=1;i<11;i++)
{
printf("%d * %d = %d\n", num,i,num*i);

}
}
