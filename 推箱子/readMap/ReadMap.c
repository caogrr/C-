#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

//������ 
#ifndef rows
	#define rows 20
#endif
//������ 
#ifndef cols
	#define cols 21
#endif

//��������� 
extern struct people{
	int x,y; 
}man;

//�����Ӹ���
extern int box; 

//��ͼ����ʱ��ͼ 
extern char maps[rows][cols];
extern char tempMaps[rows][cols];


void readerMap(){
	box=0;
	system("cls");
	printf("����������Ϸ������,���Ժ󡤡�����\n");
	system("cls");
	//�����ļ�ָ�� 
	FILE *pf;
	extern char pass[3];
	//·������ 
	char str[20]="maps/";
	strcat(str,pass);
	strcat(str,".map");
	if((pf=fopen(str,"r"))==NULL){
		printf("���������ؿ�����ʧ�ܡ�������\n\n����������Ϸ������������\n\n��������");
		system("pause");
		exit(1);
	}
	
	int i,j;
	//��ͼ���ص��ڴ� 
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
//		//��������������� 
//		*x=ch;
//		ch=fgetc(pf);
//		x++;
//	}
//	*x='\0';
	fclose(pf);
}
