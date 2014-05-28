/*
 * frame.c
 *
 *  Created on: 2014. 5. 28.
 *      Author: user
 */

#include "frame.h"

int frame(void){
	char *p=(char *)malloc(sizeof("mode con cols=%d lines=%d")+4);
	sprintf(p,"mode con cols=%d lines=%d", WIDTH , HEIGHT );
	system(p);
	system("cls");
	free(p);
	return 0;
}
