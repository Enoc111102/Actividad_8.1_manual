#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

int main()
{
	float x, y;
	printf("Ingrese el valor de x: ");
	cin >> x;
	// scanf("%f",&x);
	if (x < 0 || x>50)
	{
		y = 0;

	else if (x <= 10) {
		y = 4 / x;
	}
	else if (x <= 250) {
		y = pow(x, 3) + pow(x - 3) - 18;
	}
	printf("\n\n x=%5.2f \t y=%5.2f ",x,y);
	return 0;
	}
}

