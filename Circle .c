/*
*File: Circle.c
*Purpose: Prints the area of a circle with two different  radii 
*/
#include<stdio.h>
int main()
{
	const double PI=3.14159;
	int radius;
	double area1,area2;
	double circumference1,circumference2;
	double change_in_area,change_in_circumference;
printf("enter a value for the radius: "),
scanf("%d",&radius);
	area1= PI*radius*radius;
	circumference1=2*PI*radius;
	printf("\nThe area of the circle with radius %d is %5.2f\n",radius,area1);
		printf(" \nAnd the circumference of the circle with radius %d is %f\n",radius,circumference1);
	printf("\nenter a value twice that of the first  radius: ");
scanf("%d",&radius);
	area2=PI*radius*radius;
	circumference2=2*PI*radius;
	printf("\nThe area of the circle with radius %d is %5.2f\n",radius,area2);
        printf(" \nAnd the circumference of the circle with radius %d is %f\n",radius,circumference2);
        change_in_area= area2/area1;
        change_in_circumference= circumference2/circumference1;
        printf(" \nThe change in area is %f \n\nand the change in circumference is %f",change_in_area,change_in_circumference);
	system("pause");
	 return 0;
}
