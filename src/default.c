/* Project : Escape-The-Rock
 * default.c
 *
 *  Created on: 2014. 6. 9.
 *      Author: Jung Sangwoo  contact : holyavarice@gmail.com
 */

#include "default.h"
const int WIDTH=90;
const int HEIGHT=40;

void gotoxy(int x,int y)

{

COORD pos={x,y};

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
