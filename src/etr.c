#include "etr.h"
#include <conio.h>
#include <time.h>
#include "default.h"
#include "frame.h"

int main() {
	frame();

	while (1) {
		static int x = 0, y = 0;
		if (getch() == 224) {
			extern const int WIDTH;
			extern const int HEIGHT;
			switch (getch()) {
			case LEFT:
				gotoxy(x, y);
				printf(" ");
				x--;
				gotoxy(x, y);
				printf("|");
				break;
			case RIGHT:
				gotoxy(x, y);
				printf(" ");
				x++;
				gotoxy(x, y);
				printf("|");
				break;
			case DOWN:
				gotoxy(x, y);
				printf(" ");
				y++;
				gotoxy(x, y);
				printf("|");
				break;
			case UP:
				gotoxy(x, y);
				printf(" ");
				y--;
				gotoxy(x, y);
				printf("|");
				break;
			}
			gotoxy(WIDTH+35,HEIGHT);
			printf("%d,%d",x,y);
		}
	}

	return 0;

}
