

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

extern char pass[3];

//��ͼ����ʱ��ͼ 
extern char maps[rows][cols];
extern char tempMaps[rows][cols];


//�����ƶ�
void goUp(){
	/*
		����ʮ�ؿ�ʼʱ���������Ŀ�ĵ� 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x-1][man.y]=='4'){
			tempMaps[man.x-1][man.y]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x-1][man.y]=='9'){
			//����������û������ 
			if(tempMaps[man.x-2][man.y]=='4'){
				tempMaps[man.x-2][man.y]='9';
				tempMaps[man.x-1][man.y]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.x=man.x-1;
	}
	//��������û�ж���
	else if((tempMaps[man.x-1][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x-1][man.y]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.x=man.x-1;
	}
	//����������Ŀ�ĵ� 
		else if((tempMaps[man.x-1][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x-1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.x=man.x-1;
		} 
	//���������ǰ�����(��������û�зŵ��÷ŵ�λ���ϵ�����)
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
				
	//���������Ǻ�����
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
//�����ƶ�
void goDown(){
	/*
		����ʮ�ؿ�ʼʱ���������Ŀ�ĵ� 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x+1][man.y]=='4'){
			tempMaps[man.x+1][man.y]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x+1][man.y]=='9'){
			//����������û������ 
			if(tempMaps[man.x+2][man.y]=='2'){
				tempMaps[man.x+2][man.y]='3';
				tempMaps[man.x+1][man.y]='5';
				tempMaps[man.x][man.y]='4';
				box--;
			}
		}
		man.x=man.x+1;
	}
	//��������û�ж���
	else if((tempMaps[man.x+1][man.y]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x+1][man.y]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.x=man.x+1;
	}
	//����������Ŀ�ĵ� 
		else if((tempMaps[man.x+1][man.y]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x+1][man.y]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.x=man.x+1;
		} 
	//���������ǰ�����(��������û�зŵ��÷ŵ�λ���ϵ�����)
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
				
	//���������Ǻ�����
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
//�����ƶ�
void goLeft(){
	/*
		����ʮ�ؿ�ʼʱ���������Ŀ�ĵ� 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x][man.y-1]=='2'){
			tempMaps[man.x][man.y-1]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x][man.y-1]=='3'){
			//����������û������ 
			if(tempMaps[man.x][man.y-2]=='2'){
				tempMaps[man.x][man.y-2]='3';
				tempMaps[man.x][man.y-1]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.y=man.y-1;
	}
	//��������û�ж���
	else if((tempMaps[man.x][man.y-1]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x][man.y-1]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.y=man.y-1;
	}
	//����������Ŀ�ĵ� 
		else if((tempMaps[man.x][man.y-1]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x][man.y-1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.y=man.y-1;
		} 
	//���������ǰ�����(��������û�зŵ��÷ŵ�λ���ϵ�����)
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
				
	//���������Ǻ�����
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
//�����ƶ�
void goRight(){
	/*
		����ʮ�ؿ�ʼʱ���������Ŀ�ĵ� 
	*/ 
	if(strcmp(pass,"30")==0&&maps[man.x][man.y]=='5'){
		if(tempMaps[man.x][man.y+1]=='2'){
			tempMaps[man.x][man.y+1]='5';
			tempMaps[man.x][man.y]='4';
		}else if(tempMaps[man.x][man.y+1]=='3'){
			//����������û������ 
			if(tempMaps[man.x][man.y+2]=='2'){
				tempMaps[man.x][man.y+2]='3';
				tempMaps[man.x][man.y+1]='5';
				tempMaps[man.x][man.y]='4';
			}
		}
		man.y=man.y+1;
	}
	//��������û�ж���
	else if((tempMaps[man.x][man.y+1]=='2')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')){
		tempMaps[man.x][man.y+1]='5';
		if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
			tempMaps[man.x][man.y]='4';
		}else {
			tempMaps[man.x][man.y]='2';	
		}
		man.y=man.y+1;
	}
	//����������Ŀ�ĵ� 
		else if((tempMaps[man.x][man.y+1]=='4')&&(maps[man.x][man.y]=='5'||maps[man.x][man.y]=='2'||maps[man.x][man.y]=='3'||maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9')) {
			tempMaps[man.x][man.y+1]='5';
			if(maps[man.x][man.y]=='4'||maps[man.x][man.y]=='9'){
				tempMaps[man.x][man.y]='4';
			}else {
				tempMaps[man.x][man.y]='2';
			}
			man.y=man.y+1;
		} 
	//���������ǰ�����(��������û�зŵ��÷ŵ�λ���ϵ�����)
		//����������û�ж���
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
		//������������Ŀ�ĵ� 
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
				
	//���������Ǻ�����
		//����������û�ж���
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
		//��������	3����Ŀ�ĵ� 
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
