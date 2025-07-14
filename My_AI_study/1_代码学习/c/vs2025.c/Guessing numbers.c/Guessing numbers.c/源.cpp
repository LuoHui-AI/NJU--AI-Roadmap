#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	int red = rand()%100 + 1;
	int num = 0;
	printf("请猜数字\n");

	while (1)
	{
		scanf("%d", &num);
		//不要在"里多加空格，多余的空格会导致输入卡住
		if (num > red)
		{
			printf("猜大了\n");
		}
		else if (num < red)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
				break;
		}
	}
}

void menm() 
{
	printf("**************************\n");
	printf("******** 1.play  *********\n");
	printf("******** 2.exit  *********\n");
	printf("**************************\n");
}
	

int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
	menm();
	printf("请输入1 or 0\n");
	scanf("%d",&input);


	switch (input)
	{
		case 0:
			printf("退出游戏");
			break;
		case 1:
			game();
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}