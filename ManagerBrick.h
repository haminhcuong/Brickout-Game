#pragma once

#include <iostream>
#include "Ball.h"
#include "Paddle.h"
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;
class ManagerBrick
{
public:
	int width;
	int heigth;
	int quit;  //1:TRUE, 0:FALSE
	Ball* ball;
	Paddle* player;
	char left, right;
	string Name;
	int score = 0;
	ManagerBrick();
	~ManagerBrick();
	ManagerBrick(int w, int h);
	void scoreUp(Paddle*);// Tăng điểm cho người chơi
	void draw1(int matrantym[17][45]);
	void draw2(int matrantym[17][45]); // In ra màn hình các đối tượng
	void draw3(int matrantym[17][45]);
	void inPut();// nhận các lệnh nhập từ bàn phím, xử lí chúng
	void inPutAuto();
	void loGic1(int &so, int matrantym[17][45]);
	void loGic2(int &so, int matrantym[17][45]);// Di chuyển các Paddle và xử lí đụng tường
	void loGic3(int &so, int matrantym[17][45]);
	void Run1();// Chạy các lệnh thực thi
	void Run2();
	void Run3();
	void Run();
	void RunAuto1();
	void RunAuto2();
	void RunAuto3();
	void RunAuto();
	
};

void Project2();
void print();
void drawnewgame(int a,int b);
void drawresume(int a, int b);
void drawhigh(int a, int b);
void drawquit(int a, int b);
void drawloss(int a, int b);
void drawwin(int a, int b);

