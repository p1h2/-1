#include<iostream>
#include<graphics.h>
using namespace std;
enum { WAN_DOU,XICHAN, XI_RI_KUI };
#define WIN_WIDTH 900
#define WIN_HIGHT 600
IMAGE picture1;  //表示背景图片
IMAGE picture2;
IMAGE picture[XI_RI_KUI];
void game()     
{ 
	//加载背景图片
	loadimage(&picture1, "D:/c++编程/植物大战僵尸资料/游戏背景.png");
	loadimage(&picture2, "D:/c++编程/植物大战僵尸资料/植物商店.png");
	//初始化植物卡牌
	char name[64];
	for (int i = 0; i < XI_RI_KUI; i++)
	{
		sprintf_s(name, sizeof(name), "D:/c++编程/植物大战僵尸资料/card_%d.png", i + 1);
		loadimage(&picture[i],name);
	}
	//创建游戏的图形窗口
	initgraph(WIN_WIDTH, WIN_HIGHT);
}

void updategame()   //加载游戏
{
	putimage(0, 0, &picture1);
	putimage(0, 0, &picture2);
	for (int i = 0; i < XI_RI_KUI; i++)
	{
		int x = 75 + i * 53;
		int y = 6;
		putimage(x, y, &picture[i]);
	}
}
int main()
{
	game();
    updategame();
	system("pause");
	return 0;
}