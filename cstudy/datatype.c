#include <stdio.h>

void main()
{
	/* 1byte = 8bits= 2^8 = 256 */
	signed char temperature;
	temperature = -2;

	unsigned char age;
	age = 52;

	signed short int dday;
	dday = -30;

	unsigned short int seconds;
	seconds = 35000;

	signed long int money;
	money = 7000000;

	unsigned long int time_seconds;
	time_seconds = 1453100624;

	float foo;
	foo = 3.141592654;

	double pi;
	pi = 3.141592654;

	/* how to declare constants */
	unsigned int num = 4500;
	float a = 0.17;

	char key = 'A';
	char next = 'A' + 1; /* ascii value of a = 65, 65+1 = 66, 66 is B in ascii*/

	/* signed long int = int */
}