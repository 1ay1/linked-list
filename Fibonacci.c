#include <stdio.h>

int main()
{
	int x, y, z;
	printf("Enter the number of terms you want fabonacci series upto: ");
	int n, i;
	x = 0;
	y= 1;
	scanf("%d", &n);
	printf("The required fabonacci series is: %d %d " , x , y);
	for ( i=0; i < n; i++)
	{
		z = x + y ;
		printf("%d " ,z);
		x = y ;
		y = z;
	}
	return 0;
}
