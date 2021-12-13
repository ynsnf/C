//Palindrom Number

#include<stdio.h>  

int main()    

{    
int i,num,sum=0,temp;    

printf("enter a number=");    
scanf("%d",&i);    
temp=i;    

while(i>0)    
{    
num=i%10;    
sum=(sum*10)+num;    
i=i/10;    
}    

if(temp==sum)    
printf("This is a palindrome number ");    
else    
printf("This is not a palindrome number");   

return 0;  
}
