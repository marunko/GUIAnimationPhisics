#include "MoveFunctions.h"

void fallingEpotentialy(HDC hdc)
{
	HPEN pen = CreatePen(BS_SOLID, 5, RGB(255, 0, 0));
	SelectObject(hdc, pen);

	 
	float x = 0, y = 0; int diametr = 100;

	for (int i = 0; i < 100; i++) {

		//y = cos(x);
		x = y * y;
		Ellipse(hdc, x,y, x+diametr, y+ diametr);
		Sleep(1);
		//x++;
		y++;
	}

	DeleteObject(pen);
}

void cinusMove(HDC hdc)
{
	HPEN pen = CreatePen(BS_SOLID, 5, RGB(255, 0, 0));
	SelectObject(hdc, pen);


	int x = 100, y = 100; int diametr = 100;

	for (float i = 0; i < 3.14 * 10; i += 0.05) {

		y = cos(x);
		Ellipse(hdc, x, 50 + 25 * cos(i), x + diametr, y + diametr);
		Sleep(1);
		x++;

	}

	DeleteObject(pen);
}
