#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
#include <string.h>
/*
*user:caogrr
*
*start time:2019.10.14
*
*end time:2019.10.18
*
*
*/ 
//������ 
#define rows 20
//������ 
#define cols 21
//��ͼ���� 
char maps[rows][cols];
char tempMaps[rows][cols];

//����
struct people{
	int x,y; 
}man;

//��������ʣ����
int box=0; 

//�ؿ�:
char pass[3];

//�����ƶ�
extern void goUp();

//�����ƶ�
extern void goDown();

//�����ƶ�
extern void goLeft();

//�����ƶ�
 extern void goRight();
 
//��ȡ��ͼ
extern void readerMap();

//�滭��ͼ
extern void drawMap(); 



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static void start();

int main(int argc, char *argv[]) {
		system("title ������");
		system("mode con cols=75 lines=30");
		system("color fc");
		start();
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//׼����ʼ��Ϸ
	static void start(){
	while(1){
		
		//�����Ļ 
		system("cls");
		
		//���ùؿ�
		printf("����������ѡ��������Ĺؿ�����1~50��֮��:(����q���س��˳���Ϸ....)��������\n");
		gets(pass);
		if(strcmp(pass,"q")==0){
			printf("���������˳���Ϸ�ɹ���������\n��������");
			system("pause");
			break;
		}
		//��ȡ��ͼ 
		readerMap();
		
		//�����Ļ 
		system("cls");
		
		//��ʼ��Ϸ 
		while(1){
			
			//û�а�ɫ�����˱�ʾӮ�ˣ��˳����� 
			if(box==0){
				system("cls");
				printf("����������ϲ�㣬�����ˣ���������\n��������");
				system("pause");
				break;
			}
			
			//�����Ļ 
			system("cls");
			printf("������������ʣ������:%d ::(����q�˳�����....)��������\n",box);
			//����ͼ
			drawMap();
			
			//�����Ƿ���� ��ȡ����ǰ���ȷŻ�224 
			int  move=getch();
			
			//����ɨ�裬��ȡ���� 
			if(move==224)
				move=getch();
			else if(move=='q'){
				system("cls");
				printf("���������˳���Ϸ�ɹ���������\n��������");
				system("pause");
				break;
			}
			
			if(move==72||move==119){
				//�����ƶ�:
				goUp();
			}
			
			if(move==80||move==115){
				//�����ƶ� 
				goDown();	
			}
			
			if(move==75||move==97){
				//�����ƶ�
				goLeft(); 
			}
			
			if(move==77||move==100){
				//�����ƶ�
				goRight(); 
			}
		}	
	}  
}
