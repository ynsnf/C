//Basic Arithmetic 

#include<stdio.h>
int main()

{
int a,b,add,sub,mul,div;
printf("enter the two numbers");
scanf("%d %d",&a,&b);

add=a+b;	//addition	  
sub=a-b;	//subtraction
mul=a*b;	//multiplication
div=a/b;	//division

printf("The sum of a and b is:%d\n",add);
printf("The difference of a and b is:%d\n",sub);
printf("The product of a and b is:%d\n",mul);
printf("Dividing a and b, the result is:%d\n",div);
return 0;
}

