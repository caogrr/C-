

//定义行 
#ifndef rows
	#define rows 20
#endif
//定义列 
#ifndef cols
	#define cols 21
#endif
//引入外部数组 
extern char tempMaps[rows][cols];

//画地图 
void drawMap(){
	char *x=tempMaps;
	while(*x!='\0'){
		char ch=*x;
		switch(ch){
			case '0':printf("  ");break;
			case '1':printf("■");break;
			case '2':printf("  ");break; 
			case '3':printf("□");break;
			case '4':printf("☆");break;
			case '5':printf("♀");break;
			case '9':printf("★");break;
			case '\n':printf("\n");break;
		}
		x++;
	}
}
