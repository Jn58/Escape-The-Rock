/*
 * frame.c
 *
 *  Created on: 2014. 5. 28.
 *      Author: user
 */

#include "default.h"
#include "etr.h"
#include "frame.h"

extern const int WIDTH, HEIGHT;

void rmcursor(void);

int frame(void){
	int i;
	rmcursor();
	SetConsoleCursorInfo (NULL,NULL);

	char *p=(char *)malloc(sizeof("mode con cols=%d lines=%d")+4);
	sprintf(p,"mode con cols=%d lines=%d", WIDTH+40 , HEIGHT+2 );
	system(p);
	free(p);
	printf("¦£");
	for(i=0;i<WIDTH/2;i++) printf("¦¡");
	printf("¦¤");
	for(i=1;i<=HEIGHT;i++){
		gotoxy(0,i);
		printf("¦¢");
		gotoxy(WIDTH+2,i);
		printf("¦¢");
	}
	printf("\n¦¦");
	for(i=0;i<WIDTH/2;i++) printf("¦¡");
	printf("¦¥");//¦£¦¤¦¡¦¬¦¢¦¦
	gotoxy(WIDTH+15,5);
	printf("Score :");
	return 0;
}

void rmcursor(void){
	HANDLE hOut;
	CONSOLE_CURSOR_INFO ConCurInf;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	ConCurInf.dwSize = 10;
	ConCurInf.bVisible = FALSE;

	SetConsoleCursorInfo(hOut, &ConCurInf);
}
