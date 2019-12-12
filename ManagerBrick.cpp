#include "ManagerBrick.h"
#include "console.h"


int matrantym2[17][45] =
{
	{0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0},
	{0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0},
	{1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1},
	{0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0},
	{0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0},
	{0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0},
	{0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};//Ma tran de ve map cua level 1 va 2

int matrantym3[17][45] =
{
	{0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0},
	{0,0,0,0,0,3,3,3,3,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,3,3,3,3,0,0,0,0,0},
	{0,0,0,3,3,3,3,2,2,2,2,1,1,1,1,3,3,3,3,0,0,0,0,0,0,0,3,3,3,3,1,1,1,1,2,2,2,2,3,3,3,3,0,0,0},
	{0,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,0,0,0,0,0,1,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,0},
	{0,3,3,3,3,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,3,3,3,3,0},
	{0,0,1,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,0,1,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,0,0},
	{0,0,0,3,3,3,3,2,2,2,2,1,1,1,1,3,3,3,3,1,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,3,3,3,3,0,0},
	{0,0,0,0,0,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,3,3,3,3,2,2,2,2,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,3,3,3,3,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,3,3,3,3,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,2,2,2,2,3,3,3,3,2,2,2,2,1,1,1,1,3,3,3,3,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};// Ma tran de ve map cua level 3

ManagerBrick::ManagerBrick()
{
}

ManagerBrick::~ManagerBrick()
{
	delete ball;
	delete player;
}

ManagerBrick::ManagerBrick(int w, int h)
{
	srand(time(NULL));
	Name = "";
	quit = 0;
	left = 'j';
	right = 'l';
	score = 0;
	width = w;
	heigth = h;
	ball = new Ball(w / 2, h - 2);// Vi tri dau tien cua ball
	player = new Paddle(w / 2 - 7, h - 1);// vi tri dau tien cua paddle
}

void ManagerBrick::scoreUp(Paddle* p)
{
	ball->reset();
	player->reset();
}

void ManagerBrick::draw1(int matrantym[17][45])
{
	gotoXY(0, 0);

	TextColor(6);
	Nocursortype();// xoa con tro

	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";// in vien tren
	}
	cout << endl;

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int x = ball->getX();
			int y = ball->getY();
			int x1 = player->getX();
			int y1 = player->getY();

			if (j == 0)
				cout << "\xB2";// in vien doc
			if ((x == j) && (y == i))
			{
				TextColor(15);
				cout << "O";// in ball
				TextColor(6);
			}

			else if (x1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 2 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 3 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 4 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 5 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 6 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 7 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 8 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 9 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 11 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 12 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 13 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (i < 17) {
				if (matrantym[i][j] == 1)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 2) {
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 0) cout << " ";
			}
			else cout << " ";

			if (j == width - 1)
			{
				cout << "\xB2";
				TextColor(6);
			}
		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";
	}
	cout << endl;
	TextColor(15);
	cout << "Score: " << score << endl;
	cout << "PRESS ANY KEY (EXEPT Q) TO START" << endl;
	cout << "PRESS Q TO PAUSE" << endl;
}

void ManagerBrick::draw2(int matrantym[17][45])
{
	gotoXY(0, 0);

	TextColor(6);
	Nocursortype();

	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";
	}
	cout << endl;

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int x = ball->getX();
			int y = ball->getY();
			int x1 = player->getX();
			int y1 = player->getY();

			if (j == 0)
				cout << "\xB2";
			if ((x == j) && (y == i))
			{
				TextColor(15);
				cout << "O";
				TextColor(6);
			}

			else if (x1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 2 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 3 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 4 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 5 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 6 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";
				TextColor(6);// in lan luot phan tu cua paddle
			}
			else if (x1 + 7 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 8 == j && y1 == i)
			{
				TextColor(5);// in lan luot phan tu cua paddle
				cout << "\xB2";
				TextColor(6);
			}
			else if (x1 + 9 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);// in lan luot phan tu cua paddle
				cout << "\xB2";
				TextColor(6);
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 11 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 12 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 13 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (i < 17) {
				if (matrantym[i][j] == 1)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 3)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 2) {
					TextColor(4);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 0) cout << " ";
			}
			else cout << " ";

			if (j == width - 1)
			{
				cout << "\xB2";
				TextColor(6);
			}

		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";
	}
	cout << endl;
	TextColor(15);
	cout << "Score: " << score << endl;
	cout << "PRESS ANY KEY (EXEPT Q) TO START" << endl;
	cout << "PRESS Q TO PAUSE" << endl;

}

void ManagerBrick::draw3(int matrantym[17][45])
{
	gotoXY(0, 0);

	TextColor(6);
	Nocursortype();

	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";
	}
	cout << endl;

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int x = ball->getX();
			int y = ball->getY();
			int x1 = player->getX();
			int y1 = player->getY();

			if (j == 0)
				cout << "\xB2";
			if ((x == j) && (y == i))
			{
				TextColor(15);
				cout << "O";
				TextColor(6);
			}

			else if (x1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 1 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 2 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 3 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 4 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 5 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 6 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 7 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 8 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 9 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";
				TextColor(6);// in lan luot phan tu cua paddle
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 10 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 11 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 12 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";// in lan luot phan tu cua paddle
				TextColor(6);
			}
			else if (x1 + 13 == j && y1 == i)
			{
				TextColor(5);
				cout << "\xB2";
				TextColor(6);// in lan luot phan tu cua paddle
			}
			else if (i < 17) {
				if (matrantym[i][j] == 1)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 4)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 6)
				{
					TextColor(13);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 3)
				{
					TextColor(2);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 2) {
					TextColor(4);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 5) {
					TextColor(4);
					cout << "\xB2";
					TextColor(6);
				}
				else if (matrantym[i][j] == 0) cout << " ";
			}
			else cout << " ";

			if (j == width - 1)
			{
				cout << "\xB2";
				TextColor(6);
			}

		}
		cout << endl;
	}
	for (int i = 0; i < width + 2; i++)
	{
		cout << "\xB1";
	}
	cout << endl;
	TextColor(15);
	cout << "Score: " << score << endl;
	cout << "PRESS ANY KEY (EXEPT Q) TO START" << endl;
	cout << "PRESS Q TO PAUSE" << endl;
}

void ManagerBrick::inPut()
{
	ball->move();

	float x = ball->getX();
	float y = ball->getY();
	int x1 = player->getX();
	int y1 = player->getY();
	if (_kbhit())
	{
		char curr = _getch();
		if (curr == left)
			if (x1 > 0)	player->MoveLeft();
		if (curr == right)
			if (x1 + 14 < width) player->MoveRight();
		if (ball->getHuong() == stop)	ball->randomHuong();
		if (curr == 'q') quit = 1;
	}
}

void ManagerBrick::inPutAuto()
{
	ball->move();

	float x = ball->getX();
	float y = ball->getY();
	int x1 = player->getX();
	int y1 = player->getY();
	player->set_x(x - 3);//tu dong choi
	if (_kbhit())
	{
		char curr = _getch();
		if (ball->getHuong() == stop)	ball->randomHuong();
		if (curr == 'q') quit = 1;
	}
}

void ManagerBrick::loGic1(int &so, int matrantym[17][45])
{
	int x = ball->getX();
	int y = ball->getY();
	int x1 = player->getX();
	int y1 = player->getY();
	//Paddle
	for (int i = 0; i < 16; i++)
		if (y == y1 - 1)
		{
			if (x == x1 + i - 1)
			{
				ball->chuyenHuong(ball->getHuong() == downRight ? upRight : upLeft);
			}
		}
	//Left Wall
	if (x == 0)
		ball->chuyenHuong(ball->getHuong() == downLeft ? downRight : upRight);

	//Right Wall
	if (x == width - 1)
		ball->chuyenHuong(ball->getHuong() == downRight ? downLeft : upLeft);

	//Top Wall
	if (y == 0)
		ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);

	// Bottom Wall
	if (y == heigth)
	{
		drawloss(15, 30);
		gotoXY(55, 37);
		quit = 1;
	}

	if (so == 0)
	{
		drawwin(17, 30);
		gotoXY(55, 37);
		quit = 1;
	}

	// Xu li va cham			
	if (y == 0 && 4 < x < 41)
		if (matrantym[y][x] != 0)
		{
			if (matrantym[y][x] == 1)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 1)
						matrantym[y][x - i] = 0;
					if (matrantym[y][x + i] == 1)
						matrantym[y][x + i] = 0;
				}
			}
			if (matrantym[y][x] == 2)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 0;
					if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 0;
				}
			}
			score++;
			so--;
			ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);
		}
	if (16 >= y >= 1 && 4 < x < 41)if (matrantym[y][x] != 0)
	{

		if (matrantym[y][x] == 1)
		{
			for (int i = 0; i < 4; i++) {
				if (matrantym[y][x - i] == 1)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 1)matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 2) {
			for (int i = 0; i < 4; i++) {
				if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 0;
			}
		}
		score++;
		so--;
		if (ball->getHuong() == downLeft) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upLeft);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == downRight) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upRight);
			else ball->chuyenHuong(downLeft);

		}
		else if (ball->getHuong() == upRight) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downRight);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == upLeft) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downLeft);
			else ball->chuyenHuong(upRight);
		}
	}
}

void ManagerBrick::loGic2(int &so, int matrantym[17][45])
{
	int x = ball->getX();
	int y = ball->getY();
	int x1 = player->getX();
	int y1 = player->getY();
	//Paddle
	for (int i = 0; i < 16; i++)
		if (y == y1 - 1)
		{
			if (x == x1 + i - 1)
			{
				ball->chuyenHuong(ball->getHuong() == downRight ? upRight : upLeft);
			}
		}
	//Left Wall
	if (x == 0)
		ball->chuyenHuong(ball->getHuong() == downLeft ? downRight : upRight);

	//Right Wall
	if (x == width - 1)
		ball->chuyenHuong(ball->getHuong() == downRight ? downLeft : upLeft);

	//Top Wall
	if (y == 0)
		ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);

	// Bottom Wall
	
	if (so == 0)
	{
		drawwin(17, 30);
		gotoXY(55, 37);
		quit = 1;
	}
		


	// Xu li va cham			
	if (y == 0 && 4 < x < 41)
		if (matrantym[y][x] != 0) 
		{
			
		if (matrantym[y][x] == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 1) 
					matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 1)	
					matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 3)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 3)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 3)matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 2)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 3;
				if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 3;
			}
		}
		score++;
		so--;
		ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);
	}
	if (16 >= y >= 1 && 4 < x < 41)if (matrantym[y][x] != 0)
	{
		
		if (matrantym[y][x] == 1)
		{
			for (int i = 0; i < 4; i++) {
				if (matrantym[y][x - i] == 1)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 1)matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 3)
		{
			for (int i = 0; i < 4; i++) {
				if (matrantym[y][x - i] == 3)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 3)matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 2) {
			for (int i = 0; i < 4; i++) {
				if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 3;
				if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 3;
			}
		}
		score++;
		so--;
		if (ball->getHuong() == downLeft) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upLeft);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == downRight) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upRight);
			else ball->chuyenHuong(downLeft);

		}
		else if (ball->getHuong() == upRight) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downRight);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == upLeft) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downLeft);
			else ball->chuyenHuong(upRight);
		}
	}
}

void ManagerBrick::loGic3(int &so, int matrantym[17][45])
{
	int x = ball->getX();
	int y = ball->getY();
	int x1 = player->getX();
	int y1 = player->getY();
	//Paddle
	for (int i = 0; i < 16; i++)
		if (y == y1 - 1)
		{
			if (x == x1 + i - 1)
			{
				ball->chuyenHuong(ball->getHuong() == downRight ? upRight : upLeft);
			}
		}
	//Left Wall
	if (x == 0)
		ball->chuyenHuong(ball->getHuong() == downLeft ? downRight : upRight);

	//Right Wall
	if (x == width - 1)
		ball->chuyenHuong(ball->getHuong() == downRight ? downLeft : upLeft);

	//Top Wall
	if (y == 0)
		ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);

	// Bottom Wall
	if (y == heigth)
	{
		drawloss(15, 30);
		gotoXY(55, 37);
		quit = 1;
	}

	if (score > 70)
	{
		drawwin(17, 30);
		gotoXY(55, 37);
		quit = 1;
	}

	// Xu li va cham			
	if (y == 0 && 4 < x < 41)
		if (matrantym[y][x] != 0)
		{
			if (matrantym[y][x] == 1)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 1)
						matrantym[y][x - i] = 0;
					if (matrantym[y][x + i] == 1)
						matrantym[y][x + i] = 0;
				}
			}
			if (matrantym[y][x] == 4)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 4)
						matrantym[y][x - i] = 0;
					if (matrantym[y][x + i] == 4)
						matrantym[y][x + i] = 0;
				}
			}
			if (matrantym[y][x] == 6)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 6)matrantym[y][x - i] = 0;
					if (matrantym[y][x + i] == 6)matrantym[y][x + i] = 0;
				}
			}
			if (matrantym[y][x] == 5)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 5)matrantym[y][x - i] = 6;
					if (matrantym[y][x + i] == 5)matrantym[y][x + i] = 6;
				}
			}
			if (matrantym[y][x] == 2)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 4;
					if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 4;
				}
			}
			if (matrantym[y][x] == 3)
			{
				for (int i = 0; i < 4; i++)
				{
					if (matrantym[y][x - i] == 3)matrantym[y][x - i] = 5;
					if (matrantym[y][x + i] == 3)matrantym[y][x + i] = 5;
				}
			}
			score++;
			ball->chuyenHuong(ball->getHuong() == upRight ? downRight : downLeft);
		}
	if (16 >= y >= 1 && 4 < x < 41)if (matrantym[y][x] != 0)
	{

		if (matrantym[y][x] == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 1)
					matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 1)
					matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 4)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 4)
					matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 4)
					matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 6)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 6)matrantym[y][x - i] = 0;
				if (matrantym[y][x + i] == 6)matrantym[y][x + i] = 0;
			}
		}
		if (matrantym[y][x] == 5)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 5)matrantym[y][x - i] = 6;
				if (matrantym[y][x + i] == 5)matrantym[y][x + i] = 6;
			}
		}
		if (matrantym[y][x] == 2)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 2)matrantym[y][x - i] = 4;
				if (matrantym[y][x + i] == 2)matrantym[y][x + i] = 4;
			}
		}
		if (matrantym[y][x] == 3)
		{
			for (int i = 0; i < 4; i++)
			{
				if (matrantym[y][x - i] == 3)matrantym[y][x - i] = 5;
				if (matrantym[y][x + i] == 3)matrantym[y][x + i] = 5;
			}
		}
		score++;
		if (ball->getHuong() == downLeft) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upLeft);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == downRight) {
			if (matrantym[y - 1][x] == 0)ball->chuyenHuong(upRight);
			else ball->chuyenHuong(downLeft);

		}
		else if (ball->getHuong() == upRight) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downRight);
			else ball->chuyenHuong(downRight);
		}
		else if (ball->getHuong() == upLeft) {
			if (matrantym[y + 1][x] == 0)ball->chuyenHuong(downLeft);
			else ball->chuyenHuong(upRight);
		}
	}
}

void ManagerBrick::Run1()
{
}


void print()
{
	TextColor(14);
	gotoXY(0, 0);
	for (int i = 0; i < 52; i++)
	{
		cout << "\xB1";
	}
	cout << endl;
	for (int i = 0; i < 35; i++)
	{
		cout << "\xB2                                                  \xB2" << endl;
	}
	for (int i = 0; i < 52; i++)
	{
		cout << "\xB1";
	}
}

void ManagerBrick::Run2()
{
	system("cls");
	int a = 154;
	while (!quit)
	{
		draw2(matrantym2);
		inPut();
		loGic2(a,matrantym2);
	}
}

void ManagerBrick::Run3()
{
}

void ManagerBrick::Run()
{

}

void ManagerBrick::RunAuto1()
{
	system("cls");
	int a = 103;
	while (!quit)
	{
		draw1(matrantym2);
		inPutAuto();
		loGic1(a,matrantym2);
	}
}

void ManagerBrick::RunAuto2()
{
	system("cls");
	int a = 154;
	while (!quit)
	{
		draw2(matrantym2);
		inPutAuto();
		loGic2(a,matrantym2);
	}
}

void ManagerBrick::RunAuto3()
{
	system("cls");
	int a = 200;
	while (!quit)
	{
		draw3(matrantym3);
		inPutAuto();
		loGic3(a,matrantym3);
	}
}

void ManagerBrick::RunAuto()
{
	system("cls");
	int a = 15;
	while (a < 16)
	{
		draw1(matrantym2);
		inPutAuto();
		loGic1(a, matrantym2);
	}
	system("cls");
	int b = 15;
	while (!quit)

	{
		draw2(matrantym2);
		inPutAuto();
		loGic2(b, matrantym2);
	}
	system("cls");
	int c = 154;
	while (!quit)
	{
		draw3(matrantym3);
		inPutAuto();
		loGic3(c, matrantym3);
	}
}

void drawnewgame(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << "      __   __         __  __   _ _   __" << endl;
	gotoXY(a, b + 1);
	cout << "|    |  | |__ | | |  | _ |__| | | | |__" << endl;
	gotoXY(a, b + 2);
	cout << "|  . |  | |__ |_|_|  |__||  | | | | |__" << endl;
}

void drawresume(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << " __    __   __  __        __ __   __" << endl;
	gotoXY(a, b + 1);
	cout << " __|  |__| |__ |__  |  | |  |  | |__" << endl;
	gotoXY(a, b + 2);
	cout << "|__ . |  | |__  __| |__| |  |  | |__" << endl;
}

void drawhigh(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << "__            __         __   __  __   __   __" << endl;
	gotoXY(a, b + 1);
	cout << "__|   |__| | | _  |__|  |__  |   |  | |__| |__" << endl;
	gotoXY(a, b + 2);
	cout << "__| . |  | | |__| |  |   __| |__ |__| |  | |__" << endl;
}

void drawquit(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << "       __          _____" << endl;
	gotoXY(a, b + 1);
	cout << "|__|  |  |  |  | |   |" << endl;
	gotoXY(a, b + 2);
	cout << "   |. |__|_ |__| |   |" << endl;
}

void drawloss(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << "     __   __   __" << endl;
	gotoXY(a, b + 1);
	cout << "|   |  | |__  |__" << endl;
	gotoXY(a, b + 2);
	cout << "|__ |__|  __|  __|" << endl;
}

void drawwin(int a, int b)
{
	TextColor(2);
	gotoXY(a, b);
	cout << "         __ " << endl;
	gotoXY(a, b + 1);
	cout << "| | | | |  |" << endl;
	gotoXY(a, b + 2);
	cout << "|_|_| | |  |" << endl;
}

void Project2()
{
	int n;
	do
	{
		print();
		drawnewgame(3, 15);
		drawresume(2, 19);
		drawhigh(2, 23);
		drawquit(2, 27);
		TextColor(15);
		gotoXY(4, 32);
		cout << "==========================================\n";
		gotoXY(4, 33);
		cout << "||               CHOOSE:                ||" << endl;
		gotoXY(4, 34);
		cout << "==========================================\n";
		gotoXY(28, 33);

		cin >> n;
		cin.ignore();
		TextColor(15);
		if (n == 4)
		{
			print();
			TextColor(12);
			int a = 7;
			gotoXY(a, 10);
			cout << " ________   ________   ________\n";
			gotoXY(a, 11);
			cout << "|          |          |          \n";
			gotoXY(a, 12);
			cout << "|          |          |          \n";
			gotoXY(a, 13);
			cout << "|________  |________  |________\n";
			gotoXY(a, 14);
			cout << "         | |          |         \n";
			gotoXY(a, 15);
			cout << "         | |          |          \n";
			gotoXY(a, 16);
			cout << "_________| |________  |________\n";
			gotoXY(a, 17);
			cout << "\n";
			gotoXY(a, 18);
			cout << "            ________             \n";
			gotoXY(a, 19);
			cout << "|        | |        | |        |\n";
			gotoXY(a, 20);
			cout << "|        | |        | |        |\n";
			gotoXY(a, 21);
			cout << "|________| |        | |        |\n";
			gotoXY(a, 22);
			cout << "         | |        | |        |\n";
			gotoXY(a, 23);
			cout << "         | |        | |        |\n";
			gotoXY(a, 24);
			cout << "         | |________| |________|\n";
			gotoXY(55, 37);
		}
		else if (n == 2)
		{
			ManagerBrick c(45, 36);
			c.Run1();
			system("pause");
			system("cls");
			Project2();
		}
		else if (n == 1)
		{
			ManagerBrick c(45, 36);
			c.RunAuto();

			system("pause");
			system("cls");
			Project2();
		}
		else if (n == 3)
		{
			print();
			TextColor(2);
			gotoXY(15, 4);
			cout << "               INSTRUCTION";
			TextColor(15);
			gotoXY(2, 7);
			cout << "PLAYER1: W: Up, S: Down";
			gotoXY(2, 10);
			cout << "PLAYER2: P: Up, L: Down";
			TextColor(6);
			gotoXY(2, 13);
			system("pause");
			Project2();
		}
		else
		{
			Project2();
		}
	} while (n != 0);
	
	return;
}

