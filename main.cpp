#include<iostream>
#include<graphics.h>
using namespace std;
enum { WAN_DOU,XICHAN, XI_RI_KUI };
#define WIN_WIDTH 900
#define WIN_HIGHT 600
IMAGE picture1;  //��ʾ����ͼƬ
IMAGE picture2;
IMAGE picture[XI_RI_KUI];
void game()     
{ 
	//���ر���ͼƬ
	loadimage(&picture1, "D:/c++���/ֲ���ս��ʬ����/��Ϸ����.png");
	loadimage(&picture2, "D:/c++���/ֲ���ս��ʬ����/ֲ���̵�.png");
	//��ʼ��ֲ�￨��
	char name[64];
	for (int i = 0; i < XI_RI_KUI; i++)
	{
		sprintf_s(name, sizeof(name), "D:/c++���/ֲ���ս��ʬ����/card_%d.png", i + 1);
		loadimage(&picture[i],name);
	}
	//������Ϸ��ͼ�δ���
	initgraph(WIN_WIDTH, WIN_HIGHT);
}

void updategame()   //������Ϸ
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