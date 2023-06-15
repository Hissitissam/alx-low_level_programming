#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: awlways 0 (Success)
 */
int main(void)
{
	printf("Size of char:%c byte(s)\n" ,sizeof(char));
	printf("Size of int: %d byte(s)\n" ,sizeof(int));
	printf("Size of long int: %ld bytes(s)\n" ,sizeof(long int));
	printf("Size of float: %f byte(s)\n" ,sizeof(float));
	
	return (0);
}
