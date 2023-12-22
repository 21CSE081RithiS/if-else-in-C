#include<stdio.h>
#include <math.h>
int main()
{
	char S=1;
	char shape;
	float Size;
	float Square;
	printf("enter the shape:");
	scanf("%c", &shape);
	printf("entee the size:");
	scanf("%f", &Size);
	
	if(shape=='S')

	{
		 Square = Size * Size;
		printf("Area of Square = %.2f\n", Square);
}
else if(shape== 'C')
{
	float area = M_PI * Size * Size;
	printf("Area of circle = %.2f\n", area);
}
	else 
	{
	
	printf("invalid statement");
}
return 0;	
}

