#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

//定义行 
#ifndef rows
	#define rows 20
#endif
//定义列 
#ifndef cols
	#define cols 21
#endif

//人物的坐标 
extern struct people{
	int x,y; 
}man;

//白箱子个数
extern int box; 

//地图和临时地图 
extern char maps[rows][cols];
extern char tempMaps[rows][cols];


void readerMap(){
	box=0;
	system("cls");
	printf("····游戏加载中,请稍后····\n");
	system("cls");
	//设置文件指针 
	FILE *pf;
	extern char pass[3];
	//路径设置 
	char str[20]="maps/";
	strcat(str,pass);
	strcat(str,".map");
	if((pf=fopen(str,"r"))==NULL){
		printf("····关卡加载失败····\n\n····游戏结束····\n\n····");
		system("pause");
		exit(1);
	}
	
	int i,j;
	//地图加载到内存 
	for(i=0;i<20;i++){
		for(j=0;j<21;j++){
			tempMaps[i][j]=maps[i][j]=fgetc(pf);
			if(tempMaps[i][j]=='5'){
				man.x=i;
				man.y=j;
			}
			if(maps[i][j]=='3'){
				box++;
			}
		}
	}
	tempMaps[19][20]=maps[19][20]='\0';
//	char *x=maps; 
//	char ch=fgetc(pf);
//	while(ch!=EOF){
//		//向数组中添加数据 
//		*x=ch;
//		ch=fgetc(pf);
//		x++;
//	}
//	*x='\0';
	fclose(pf);
}
