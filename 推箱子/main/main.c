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
//定义行 
#define rows 20
//定义列 
#define cols 21
//地图数据 
char maps[rows][cols];
char tempMaps[rows][cols];

//人物
struct people{
	int x,y; 
}man;

//白箱子所剩个数
int box=0; 

//关卡:
char pass[3];

//向上移动
extern void goUp();

//向下移动
extern void goDown();

//向左移动
extern void goLeft();

//向右移动
 extern void goRight();
 
//读取地图
extern void readerMap();

//绘画地图
extern void drawMap(); 



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static void start();

int main(int argc, char *argv[]) {
		system("title 推箱子");
		system("mode con cols=75 lines=30");
		system("color fc");
		start();
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//准备开始游戏
	static void start(){
	while(1){
		
		//清除屏幕 
		system("cls");
		
		//设置关卡
		printf("····请选择你想玩的关卡，在1~50关之间:(输入q按回车退出游戏....)····\n");
		gets(pass);
		if(strcmp(pass,"q")==0){
			printf("····退出游戏成功····\n····");
			system("pause");
			break;
		}
		//读取地图 
		readerMap();
		
		//清除屏幕 
		system("cls");
		
		//开始游戏 
		while(1){
			
			//没有白色箱子了表示赢了，退出本局 
			if(box==0){
				system("cls");
				printf("····恭喜你，过关了！····\n····");
				system("pause");
				break;
			}
			
			//清除屏幕 
			system("cls");
			printf("····箱子剩余数量:%d ::(输入q退出本关....)····\n",box);
			//画地图
			drawMap();
			
			//若果是方向键 获取方向前会先放回224 
			int  move=getch();
			
			//返回扫描，获取方向 
			if(move==224)
				move=getch();
			else if(move=='q'){
				system("cls");
				printf("····退出游戏成功····\n····");
				system("pause");
				break;
			}
			
			if(move==72||move==119){
				//向上移动:
				goUp();
			}
			
			if(move==80||move==115){
				//向下移动 
				goDown();	
			}
			
			if(move==75||move==97){
				//向左移动
				goLeft(); 
			}
			
			if(move==77||move==100){
				//向右移动
				goRight(); 
			}
		}	
	}  
}
