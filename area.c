//Area of Circle,Triangle,Rectangle and Square

#include<stdio.h>
int main()
{
float circle,tri,r,base,ht;		 // Circle and Triangle
int rect,sqr,l,b,s;		        //  Rectangle and Square
							
		

printf("Enter the radius of the circle\n");	//Circle
scanf("%f",&r);

printf("Enter the base and height of the triangle\n");    //Triangle
scanf("%f%f",&base,&ht); 


printf("Enter the length and breadth of the Rectangle\n");   //Rectangle
scanf("%d %d",&l,&b);

printf("Enter the side of the square\n");		 //Square	
scanf("%d",&s);


circle=3.14*r*r;
rect=l*b;
sqr=s*s;
tri=0.5*base*ht;

printf("The Area of Circle is %f\n",circle);
printf("The Area of Rectangle is %d\n",rect);
printf("The Area of Square is %d\n",sqr);
printf("The Area of Triangle is %f\n",tri);
return 0;

}
