/*
 ============================================================================
 Name        : Lab1Part1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main(void) {

	float radius = 0;
	float result = 0;

	printf("Enter the radius of your circle: ");
	scanf("%f", &radius);

	result = pow(radius, 2) * PI;

	printf("\nThe area of your circle is %.2f", result);
return 0;
}
