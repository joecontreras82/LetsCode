/*
 * main.c
 *
 *  Created on: Nov 1, 2014
 *      Author: siddh_000
 */

#include <stdio.h>
#include <stdlib.h>

void tempFunction()
{
	printf("this is a temp function\n");
}


int main (int argc,char* argv[])
{
	unsigned int a;
	unsigned int x = 0x76543210;
	char *c = (char*) &x;
	char *temp = malloc(sizeof(char));

	tempFunction();

	if (*c == 0x10)
	{
	printf ("Underlying architecture is little endian. \n");
	}
	else
	{
	 printf ("Underlying architecture is big endian. \n");
	}

	printf("address of main is 0x%X\n",main);
	printf("address of tempFunction is 0x%X\n",tempFunction);
	printf("address of argument count is 0x%X\n",&argc);
	printf("address of argument array is 0x%X\n",argv);
	printf("address of bss segment is 0x%X\n",&a);
	printf("address of data segment is 0x%X\n",&x);
	printf("address of heap is 0x%X\n",temp);

	free(temp);
	return 0;
}
