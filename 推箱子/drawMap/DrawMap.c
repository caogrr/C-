

//������ 
#ifndef rows
	#define rows 20
#endif
//������ 
#ifndef cols
	#define cols 21
#endif
//�����ⲿ���� 
extern char tempMaps[rows][cols];

//����ͼ 
void drawMap(){
	char *x=tempMaps;
	while(*x!='\0'){
		char ch=*x;
		switch(ch){
			case '0':printf("  ");break;
			case '1':printf("��");break;
			case '2':printf("  ");break; 
			case '3':printf("��");break;
			case '4':printf("��");break;
			case '5':printf("��");break;
			case '9':printf("��");break;
			case '\n':printf("\n");break;
		}
		x++;
	}
}
