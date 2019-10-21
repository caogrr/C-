

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

extern char pass[3];

//地图和临时地图 
extern char maps[rows][cols];
extern char tempMaps[rows][cols];


//向上移动
void goUp(){
	/*
		第三十关开始时人物脚下是目的地 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x-1][man.y]=='4'){
			tempMaps[man.x-1][man.y]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x-1][man.y]=='9'){
			//黑箱子上面没有箱子 
			if(tempMaps[man.x-2][man.y]=='4'){
				tempMaps[man.x-2][man.y]='9';
				tempMaps[man.x-1][man.y]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.x=man.x-1;
	}
	//人物上面没有东西
	else if((tempMaps[man.x-1][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x-1][man.y]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.x=man.x-1;
	}
	//人物上面是目的地 
		else if((tempMaps[man.x-1][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x-1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.x=man.x-1;
		} 
	//人物上面是白箱子(白箱子是没有放到该放的位置上的箱子)
		//白箱子上面没有东西
		else if((tempMaps[man.x-1][man.y]=='3'&&tempMaps[man.x-2][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			tempMaps[man.x-2][man.y]='3';
			tempMaps[man.x-1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';	
			}
			man.x=man.x-1;
		}
		//白箱子上面是目的地 
			else if((tempMaps[man.x-1][man.y]=='3'&&tempMaps[man.x-2][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
				tempMaps[man.x-2][man.y]='9';
				tempMaps[man.x-1][man.y]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x-1;
				box--; 
			}
				
	//人物上面是黑箱子
		//黑箱子上面没有东西
			 else if((tempMaps[man.x-1][man.y]=='9'&&tempMaps[man.x-2][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			 	tempMaps[man.x-2][man.y]='3';
			 	tempMaps[man.x-1][man.y]='5';
			 	if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x-1;
				box++;
			 }
		//黑箱子上面是目的地 
			else if((tempMaps[man.x-1][man.y]=='9'&&tempMaps[man.x-2][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
				tempMaps[man.x-2][man.y]='9';
				tempMaps[man.x-1][man.y]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x-1;
			}
}
//向下移动
void goDown(){
	/*
		第三十关开始时人物脚下是目的地 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x+1][man.y]=='4'){
			tempMaps[man.x+1][man.y]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x+1][man.y]=='9'){
			//黑箱子下面没有箱子 
			if(tempMaps[man.x+2][man.y]=='2'){
				tempMaps[man.x+2][man.y]='3';
				tempMaps[man.x+1][man.y]='5';
				tempMaps[man.x][man.y]='4';
				box--;
			}
		}
		man.x=man.x+1;
	}
	//人物下面没有东西
	else if((tempMaps[man.x+1][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x+1][man.y]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.x=man.x+1;
	}
	//人物下面是目的地 
		else if((tempMaps[man.x+1][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x+1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.x=man.x+1;
		} 
	//人物下面是白箱子(白箱子是没有放到该放的位置上的箱子)
		//白箱子下面没有东西
		else if((tempMaps[man.x+1][man.y]=='3'&&tempMaps[man.x+2][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			tempMaps[man.x+2][man.y]='3';
			tempMaps[man.x+1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';	
			}
			man.x=man.x+1;
		}
		//白箱子下面是目的地 
			else if((tempMaps[man.x+1][man.y]=='3'&&tempMaps[man.x+2][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
				tempMaps[man.x+2][man.y]='9';
				tempMaps[man.x+1][man.y]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x+1;
				box--; 
			}
				
	//人物下面是黑箱子
		//黑箱子下面没有东西
			 else if((tempMaps[man.x+1][man.y]=='9'&&tempMaps[man.x+2][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			 	tempMaps[man.x+2][man.y]='3';
			 	tempMaps[man.x+1][man.y]='5';
			 	if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x+1;
				box++;
			 }
		//黑箱子下面是目的地 
			else if((tempMaps[man.x+1][man.y]=='9'&&tempMaps[man.x+2][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
				tempMaps[man.x+2][man.y]='9';
				tempMaps[man.x+1][man.y]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.x=man.x+1;
			}
} 
//向左移动
void goLeft(){
	/*
		第三十关开始时人物脚下是目的地 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x][man.y-1]=='2'){
			tempMaps[man.x][man.y-1]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x][man.y-1]=='3'){
			//白箱子左面没有箱子 
			if(tempMaps[man.x][man.y-2]=='2'){
				tempMaps[man.x][man.y-2]='3';
				tempMaps[man.x][man.y-1]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.y=man.y-1;
	}
	//人物左面没有东西
	else if((tempMaps[man.x][man.y-1]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x][man.y-1]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.y=man.y-1;
	}
	//人物左面是目的地 
		else if((tempMaps[man.x][man.y-1]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x][man.y-1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.y=man.y-1;
		} 
	//人物左面是白箱子(白箱子是没有放到该放的位置上的箱子)
		//白箱子左面没有东西
		else if((tempMaps[man.x][man.y-1]=='3'&&tempMaps[man.x][man.y-2]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			tempMaps[man.x][man.y-2]='3';
			tempMaps[man.x][man.y-1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';	
			}
			man.y=man.y-1;
		}
		//白箱子左面是目的地 
			else if((tempMaps[man.x][man.y-1]=='3'&&tempMaps[man.x][man.y-2]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
				tempMaps[man.x][man.y-2]='9';
				tempMaps[man.x][man.y-1]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y-1;
				box--; 
			}
				
	//人物左面是黑箱子
		//黑箱子左面没有东西
			 else if((tempMaps[man.x][man.y-1]=='9'&&tempMaps[man.x][man.y-2]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			 	tempMaps[man.x][man.y-2]='3';
			 	tempMaps[man.x][man.y-1]='5';
			 	if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y-1;
				box++;
			 }
		//黑箱子左面是目的地 
			else if((tempMaps[man.x][man.y-1]=='9'&&tempMaps[man.x][man.y-2]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
				tempMaps[man.x][man.y-2]='9';
				tempMaps[man.x][man.y-1]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y-1;
			}			
} 
//向右移动
void goRight(){
	/*
		第三十关开始时人物脚下是目的地 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x][man.y+1]=='2'){
			tempMaps[man.x][man.y+1]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x][man.y+1]=='3'){
			//黑箱子下面没有箱子 
			if(tempMaps[man.x][man.y+2]=='2'){
				tempMaps[man.x][man.y+2]='3';
				tempMaps[man.x][man.y+1]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.y=man.y+1;
	}
	//人物下面没有东西
	else if((tempMaps[man.x][man.y+1]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x][man.y+1]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.y=man.y+1;
	}
	//人物右面是目的地 
		else if((tempMaps[man.x][man.y+1]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x][man.y+1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.y=man.y+1;
		} 
	//人物下面是白箱子(白箱子是没有放到该放的位置上的箱子)
		//白箱子下面没有东西
		else if((tempMaps[man.x][man.y+1]=='3'&&tempMaps[man.x][man.y+2]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			tempMaps[man.x][man.y+2]='3';
			tempMaps[man.x][man.y+1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';	
			}
			man.y=man.y+1;
		}
		//白箱子下面是目的地 
			else if((tempMaps[man.x][man.y+1]=='3'&&tempMaps[man.x][man.y+2]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
				tempMaps[man.x][man.y+2]='9';
				tempMaps[man.x][man.y+1]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y+1;
				box--; 
			}
				
	//人物下面是黑箱子
		//黑箱子下面没有东西
			 else if((tempMaps[man.x][man.y+1]=='9'&&tempMaps[man.x][man.y+2]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
			 	tempMaps[man.x][man.y+2]='3';
			 	tempMaps[man.x][man.y+1]='5';
			 	if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y+1;
				box++;
			 }
		//黑箱子下	3面是目的地 
			else if((tempMaps[man.x][man.y+1]=='9'&&tempMaps[man.x][man.y+2]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
				tempMaps[man.x][man.y+2]='9';
				tempMaps[man.x][man.y+1]='5';
				if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
					tempMaps[man.x][man.y]='4';
				}else {
					tempMaps[man.x][man.y]='2';	
				}
				man.y=man.y+1;
			}			
} 
