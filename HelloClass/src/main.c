/*
 * main.c
 *
 *  Created on: Nov 2, 2014
 *      Author: siddh_000
 */

#include <stdio.h>

const int PI = 3; //initialized data segment

static int hret;

void funct()
{
	int i;
	printf("i = %d, address of i = 0x%X\n",i,&i);
}

int main(int argc, char *argv[])
{
	char *ptr = malloc(sizeof(char));

	printf("address of code segment: 0x%X\n",main);
	printf("address of data segment: 0x%X\n",&PI);
	printf("address of bss segment: 0x%X\n",&hret);
	printf("address of heap start: 0x%X\n",ptr);
	printf("address of arguments: 0x%X\n",&argc);
	printf("address of argv: 0x%X\n",argv);

	funct();


	int temp = 0x80000010;
		char* tempPtr = temp;

		if(*tempPtr == 0x80)
		{
			printf("system is big endian\n");
		}
		else
		{
			printf("system is little endian\n");
		}

	free(ptr);
	return 0;
}
