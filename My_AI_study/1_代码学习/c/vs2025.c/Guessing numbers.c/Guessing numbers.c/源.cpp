#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	int red = rand()%100 + 1;
	int num = 0;
	printf("�������\n");

	while (1)
	{
		scanf("%d", &num);
		//��Ҫ��"���ӿո񣬶���Ŀո�ᵼ�����뿨ס
		if (num > red)
		{
			printf("�´���\n");
		}
		else if (num < red)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
	printf("������1 or 0\n");
	scanf("%d",&input);


	switch (input)
	{
		case 0:
			printf("�˳���Ϸ");
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