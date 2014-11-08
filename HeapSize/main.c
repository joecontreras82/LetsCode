/*
 * main.c
 *
 *  Created on: Nov 1, 2014
 *      Author: siddh_000
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NULL 0

int main(int argc,char* argv[]){
        int oneHundredMiB=100*1048576;
        int maxMemMiB=0;
        void *memPointer = NULL;
        do{
                if(memPointer != NULL){
                        printf("Max Tested Memory = %i\n",maxMemMiB);
                        memset(memPointer,0,maxMemMiB);
                        free(memPointer);
                }
                maxMemMiB+=oneHundredMiB;
                memPointer=malloc(maxMemMiB);
        }while(memPointer != NULL);
        printf("Max Usable Memory approx = %i\n",maxMemMiB-oneHundredMiB);
        return 0;
}
