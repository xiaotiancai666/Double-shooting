#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#define left 1
#define right 2
#define up 3
#define down 4
#define numfood1 20
#define numfood2 20


int height=50,width=50; 

void StartUp();


//可以考虑使用一个二维数组记录后将每一位都记录下来之后打印 
int map[30][30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
				 0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,
				 0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,4,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,
				 0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,
				 0,1,1,1,0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,0,
				 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,0,
				 0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,
				 0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,
				 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
				 };//40				 
int x1=4,y1=4,y12=5,y13=6,x13=4,x12=4;
int x2=25,y2=24,y22=25,y23=26,x22=25,x23=25;
int bullet1_xposition[1000],bullet1_yposition[1000];
int bullet2_xposition[1000],bullet2_yposition[1000];
int direct1,direct2;
int bullet1_direct[1000]={0},bullet2_direct[1000]={0};
int numbul1=0,numbul2=0;
int life1=10,life2=10;
int fireopen1=0,fireopen2=0;
int result;
int foodx1[numfood1],foody1[numfood1];
int foodx2[numfood2],foody2[numfood2];//food1和food2都只有六个 
int score1,score2;
void show_man1();//第一个人打印 
void keyecho();//键盘响应
void unkeyecho();//非键盘响应 
void show_man2();//第二个人打印 
void bullet1_show();
void bullet2_show();
void bullet1_move(int i);
void bullet2_move(int i);
void bullet_judge();
void hitjudge1();
void hitjudge2();
void showresult();
void foodshoot();
void foodprintf1();
void foodprintf2();
void foodseed1();
void foodseed2();
void build1();
void build2();

HANDLE hout=GetStdHandle(STD_OUTPUT_HANDLE);
COORD coord;
void hide()//隐藏光标函数 
{
CONSOLE_CURSOR_INFO cursor_info={1,0};
SetConsoleCursorInfo(hout, &cursor_info);
}

void gotoxy(int x, int y)//光标位置移动到(x,y)处 
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}

void swap(int *m,int *n)//交换位置函数 
{
	int temp;
	temp = *m;
	*m = *n;
	*n = temp;
}

void move(int a)//人物移动 
{
		if(a==1&&map[y1-1][x1]==1)
		{ 
			swap(&map[--y1][x1],&map[y1][x1]);
			swap(&map[--y12][x12],&map[y12][x12]);
			swap(&map[--y13][x13],&map[y13][x13]);
		}
		if(a==2&&map[y13+1][x13]==1)
		{ 
			swap(&map[++y13][x13],&map[y13][x13]);
			swap(&map[++y12][x12],&map[y12][x12]);
			swap(&map[++y1][x1],&map[y1][x1]);
		}
		if(a==3&&map[y1][x1-1]==1&&map[y12][x12-1]==1&&map[y13][x13-1]==1)
		{ 
			swap(&map[y1][--x1],&map[y1][x1]);
			swap(&map[y12][--x12],&map[y12][x12]);
			swap(&map[y13][--x13],&map[y13][x13]);
		}
		if(a==4&&map[y1][x1+1]==1&&map[y12][x12+1]==1&&map[y13][x13+1]==1)
		{ 
			swap(&map[y1][++x1],&map[y1][x1]);
			swap(&map[y12][++x12],&map[y12][x12]);
			swap(&map[y13][++x13],&map[y13][x13]);
		}
		if(a==5&&map[y2-1][x2]==1)
		{ 
			swap(&map[--y2][x2],&map[y2][x2]);
			swap(&map[--y22][x22],&map[y22][x22]);
			swap(&map[--y23][x23],&map[y23][x23]);
		}
		if(a==6&&map[y23+1][x2]==1)
		{ 		
			swap(&map[++y23][x23],&map[y23][x23]);
			swap(&map[++y22][x22],&map[y22][x22]);
			swap(&map[++y2][x2],&map[y2][x2]);
		}
		if(a==7&&map[y2][x2-1]==1&&map[y22][x22-1]==1&&map[y23][x23-1]==1)
		{ 
			swap(&map[y2][--x2],&map[y2][x2]);
			swap(&map[y22][--x22],&map[y22][x22]);
			swap(&map[y23][--x23],&map[y23][x23]);
		}
		if(a==8&&map[y2][x2+1]==1&&map[y22][x22+1]==1&&map[y23][x23+1]==1)
		{ 
			swap(&map[y2][++x2],&map[y2][x2]);
			swap(&map[y22][++x22],&map[y22][x22]);
			swap(&map[y23][++x23],&map[y23][x23]);
		}
}

void showmap()//地图显示函数 
{
	int i,j;
	gotoxy(0,0);
	for(i=0;i<=29;i++)
	{	
		for(j=0;j<=29;j++)
		{
			if(map[i][j]==1)
			printf("  ");
			if(map[i][j]==0)
			printf("# ",59);
			if(map[i][j]==2)
			printf("1P"); 
			if(map[i][j]==3)
			printf("〇");
			if(map[i][j]==4)
			printf("大");
			if(map[i][j]==5)
			printf("2P");
			if(map[i][j]==6)
			printf("。");
			if(map[i][j]==7)
			printf("帅");
			if(map[i][j]==8)
			printf("丑");
			if(map[i][j]==9)
			printf("口");
		}
	printf("\n");
	}	
}

void final_printf()//游戏结果显示函数 
{
	
	if(result){
		gotoxy(x1,y1);
		printf("1P,YOU WIN!");
	}
	else{
		gotoxy(x2,y2);
		printf("2P,YOU WIN!");
	}
}

void live_printf()//生命值打印函数 
{
	gotoxy(150,35);
	printf("life of 1P is %4d",life1);
	gotoxy(150,36);
	printf("life of 2P is %4d",life2);
}

int my_abs(int a,int b)
{
	int c;
	c=a-b;
	if(c<=0)
	return -c;
	else
	return c;	
}

void introduction()
{
	gotoxy(80,1);
	printf("在这个游戏中，两位玩家将会扮演两个火柴人，你们将进行对战。\n以下是给你们的对战宝典：\n");
	printf("                                                                            ");
	printf("1P使用WASD移动，G发射子弹，H可以放置一个能够抵挡一颗子弹的方块。而2P对应上下左右'/'键进行子弹发射，'。'键放置方块。\n");
	printf("                                                                            ");
	printf("其中，我们设计了两个方块，帅对应给自己life++，丑对应给对方life--，你们要做的，就是让对手life归零，同时保护好自己！"); 
}

main()//游戏主函数 
{
	StartUp(); 
	hide();
	system("mode con cols=200 lines=50");//设置屏幕大小 
	introduction();
	foodseed1();
	foodseed2();
	foodprintf1();
	foodprintf2();//得分块打印函数
	while(1)
	{
		showmap();
		keyecho();	
		unkeyecho();
		//gotoxy(40,40);
		//printf("numbul1= %d,numbul2= %d",numbul1,numbul2);
		live_printf();
		if(life1<=0)
		{
			result=0;
			break;
		}
	else if(life2<=0)
		{
			result=1;
			break;
		}
	}
	final_printf();
}

void keyecho()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'w' : {move(1);direct1=up;}break;
			case 's' : {move(2);direct1=down;}break;
			case 'a' : {move(3);direct1=left;}break;
			case 'd' : {move(4);direct1=right;}break;
			case 72 : {move(5);direct2=up;}break;
			case 80 : {move(6);direct2=down;}break;
			case 75 : {move(7);direct2=left;}break;
			case 77 : {move(8);direct2=right;}break;
			case 'g' : fireopen1=1;break;
			case '/' : fireopen2=1;break;
			case 'h':build1();break;
			case '.': build2();break;
		}	
	}
}

void bullet1_show()//子弹显示函数 
{
	if(direct1==left||direct1==right)
	{
		if(direct1==left&&map[y1+1][x1-1]==1)
		{
			bullet1_xposition[numbul1]=x1-1;
			bullet1_yposition[numbul1]=y1+1;
			map[bullet1_yposition[numbul1]][bullet1_xposition[numbul1]]=6;
			bullet1_direct[numbul1]=left;
		}
		else if(direct1==right&&map[y1+1][x1+1]==1)
		{
			bullet1_xposition[numbul1]=x1+1;
			bullet1_yposition[numbul1]=y1+1;
			map[bullet1_yposition[numbul1]][bullet1_xposition[numbul1]]=6;
			bullet1_direct[numbul1]=right;
		}		
	}
	else
	{
		if(direct1==up&&map[y1-1][x1]==1)
		{
			bullet1_xposition[numbul1]=x1;
			bullet1_yposition[numbul1]=y1-1;
			map[bullet1_yposition[numbul1]][bullet1_xposition[numbul1]]=6;
			bullet1_direct[numbul1]=up;
		}
		else if(direct1==down&&map[y1+3][x1]==1)
		{
			bullet1_xposition[numbul1]=x1;
			bullet1_yposition[numbul1]=y1+3;
			map[bullet1_yposition[numbul1]][bullet1_xposition[numbul1]]=6;
			bullet1_direct[numbul1]=down;
		}
	}
}

void bullet2_show()
{
if(direct2==left||direct2==right)
	{
		if(direct2==left&&map[y2+1][x2-1]==1)
		{
			bullet2_xposition[numbul2]=x2-1;
			bullet2_yposition[numbul2]=y2+1;
			map[bullet2_yposition[numbul2]][bullet2_xposition[numbul2]]=6;
			bullet2_direct[numbul2]=left;
		}
		else if(direct2==right&&map[y2+1][x2+1]==1)
		{
			bullet2_xposition[numbul2]=x2+1;
			bullet2_yposition[numbul2]=y2+1;
			map[bullet2_yposition[numbul2]][bullet2_xposition[numbul2]]=6;
			bullet2_direct[numbul2]=right;
		}		
	}
	else
	{
		if(direct2==up&&map[y2-1][x2]==1)
		{
			bullet2_xposition[numbul2]=x2;
			bullet2_yposition[numbul2]=y2-1;
			map[bullet2_yposition[numbul2]][bullet2_xposition[numbul2]]=6;
			bullet2_direct[numbul2]=up;
		}
		else if(direct2==down&&map[y2+3][x2]==1)
		{
			bullet2_xposition[numbul2]=x2;
			bullet2_yposition[numbul2]=y2+3;
			map[bullet2_yposition[numbul2]][bullet2_xposition[numbul2]]=6;
			bullet2_direct[numbul2]=down;
		}
	}
}

void bullet_judge()//子弹是否产生 
{
	if(fireopen1==1)
	{
		bullet1_show();
		fireopen1=0;
		numbul1++;//将开枪状态变为否并发射一颗子弹并记录子弹数目 
	}
	if(fireopen2==1)
	{
		bullet2_show();
		fireopen2=0;
		numbul2++;
	}	
}

void bullet_disappear()//子弹消失（击中墙体或者人） 
{
	int m,n;
	for(m=0;m<numbul1;m++)//1P的四面攻击 
	{
		if(bullet1_direct[m]==left)
		{
			if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]==7)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life1++;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]-1]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]==8)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]-1]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]==9)
			{								
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]-1]=1; 
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]!=1)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
		}
		if(bullet1_direct[m]==right)
		{
			if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]==7)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life1++;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]+1]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]==8)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]+1]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]==9)
			{					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]][bullet1_xposition[m]+1]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
			else if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]!=1)
			{			
				if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
			
		}
		if(bullet1_direct[m]==up)
		{
			if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]==7)
			{			
				if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life1++;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]-1][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]==8)
			{			
				if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]-1][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]==9)
			{						
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]-1][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
			else if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]!=1)
			{			
				if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
		}
		if(bullet1_direct[m]==down)
		{
			if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]==7)
			{			
				if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life1++;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]+1][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]==8)
			{			
				if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				map[bullet1_yposition[m]+1][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]==9)
			{	
				map[bullet1_yposition[m]+1][bullet1_xposition[m]]=1;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
			else if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]!=1)
			{			
				if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]!=0&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
				life2--;					
				map[bullet1_yposition[m]][bullet1_xposition[m]]=1;
				bullet1_yposition[m]=0;
				bullet1_xposition[m]=0;
			}
		}
	}
	for(n=0;n<numbul2;n++)
	{
		if(bullet2_direct[n]==left)
		{
			if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]==7)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life2++;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]-1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]==8)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]-1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]==9)
			{						
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]-1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]!=1)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
		}
		if(bullet2_direct[n]==right)
		{
			if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]==7)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life2++;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]+1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]==8)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]+1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]==9)
			{						
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]][bullet2_xposition[n]+1]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
			else if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]!=1)
			{			
				if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
		}
		if(bullet2_direct[n]==up)
		{
			if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]==7)
			{			
				if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life2++;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]-1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]==8)
			{			
				if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]-1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]==9)
			{						
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]-1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
			else if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]!=1)
			{			
				if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
		}
		if(bullet2_direct[n]==down)
		{
			if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]==7)
			{			
				if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life2++;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]+1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed2();
				foodprintf2();
			}
			else if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]==8)
			{			
				if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]+1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
				foodseed1();
				foodprintf1();
			}
			else if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]==9)
			{						
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				map[bullet2_yposition[n]+1][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
			else if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]!=1)
			{			
				if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]!=0&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
				life1--;					
				map[bullet2_yposition[n]][bullet2_xposition[n]]=1;
				bullet2_yposition[n]=0;
				bullet2_xposition[n]=0;
			}
		}
	}
}

void unkeyecho()
{
	int m,n;
	bullet_judge();
	bullet1_move(m);//子弹移动 
	bullet2_move(n);
	bullet_disappear();//子弹消失 
}

void bullet1_move(int m)
{
	for(m=0;m<numbul1;m++)
	{
	if(bullet1_direct[m]==left)
	{
		if(bullet1_xposition[m]>=2)
		{
			if(map[bullet1_yposition[m]][bullet1_xposition[m]-1]==1&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
			swap(&map[bullet1_yposition[m]][--bullet1_xposition[m]],&map[bullet1_yposition[m]][bullet1_xposition[m]]);
		}
	}
	else if(bullet1_direct[m]==right)
	{
		if(bullet1_xposition[m]<=27)
		{
			if(map[bullet1_yposition[m]][bullet1_xposition[m]+1]==1&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
			swap(&map[bullet1_yposition[m]][++bullet1_xposition[m]],&map[bullet1_yposition[m]][bullet1_xposition[m]]);
		}
	}
	else if(bullet1_direct[m]==up)
	{
		if(bullet1_yposition[m]>=2)
		{
			if(map[bullet1_yposition[m]-1][bullet1_xposition[m]]==1&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
			swap(&map[--bullet1_yposition[m]][bullet1_xposition[m]],&map[bullet1_yposition[m]][bullet1_xposition[m]]);
		}
	}
	else if(bullet1_direct[m]==down)
	{
		if(bullet1_yposition[m]<=27)
		{
			if(map[bullet1_yposition[m]+1][bullet1_xposition[m]]==1&&map[bullet1_yposition[m]][bullet1_xposition[m]]==6)
			swap(&map[++bullet1_yposition[m]][bullet1_xposition[m]],&map[bullet1_yposition[m]][bullet1_xposition[m]]);
		}
	}
}
}

void bullet2_move(int n)
{
	for(n=0;n<numbul2;n++)
	{
	if(bullet2_direct[n]==left)
	{
		if(bullet2_xposition[n]>=2)
		{
			if(map[bullet2_yposition[n]][bullet2_xposition[n]-1]==1&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
			swap(&map[bullet2_yposition[n]][--bullet2_xposition[n]],&map[bullet2_yposition[n]][bullet2_xposition[n]]);
		}
	}
	else if(bullet2_direct[n]==right)
	{
		if(bullet2_xposition[n]<=27)
		{
			if(map[bullet2_yposition[n]][bullet2_xposition[n]+1]==1&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
			swap(&map[bullet2_yposition[n]][++bullet2_xposition[n]],&map[bullet2_yposition[n]][bullet2_xposition[n]]);
		}
	}
	else if(bullet2_direct[n]==up)
	{
		if(bullet2_yposition[n]>=2)
		{
			if(map[bullet2_yposition[n]-1][bullet2_xposition[n]]==1&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
			swap(&map[--bullet2_yposition[n]][bullet2_xposition[n]],&map[bullet2_yposition[n]][bullet2_xposition[n]]);
		}
	}
	else if(bullet2_direct[n]==down)
	{
		if(bullet2_yposition[n]<=27)
		{
			if(map[bullet2_yposition[n]+1][bullet2_xposition[n]]==1&&map[bullet2_yposition[n]][bullet2_xposition[n]]==6)
			swap(&map[++bullet2_yposition[n]][bullet2_xposition[n]],&map[bullet2_yposition[n]][bullet2_xposition[n]]);
		}
	}
	}
}


void foodseed1()//随机得到得分块坐标 
{
	int i;
	if(i!=numfood1)//丑 
	{
		for(i=1;i<=numfood1;i++)
		{	
			srand((unsigned int)time(NULL));
			do{
				foodx1[i]=rand()%24+3;
				foody1[i]=rand()%24+3;
			}while(map[foodx1[i]][foody1[i]]!=1);
			
		}
	}
}

void foodseed2()//随机得到得分块坐标 
{
	int j;
	if(j!=numfood2)//帅 
	{
		for(j=1;j<=numfood2;j++)
		{
			srand((unsigned int)time(NULL));
			do{
			foodx2[j]=rand()%25+3;
			foody2[j]=rand()%25+3;
			}while(map[foodx2[j]][foody2[j]]!=1);
		}
	}
}
void foodprintf1()
{
	int i;
	for(i=1;i<=numfood1;i++)
	map[foody1[i]][foodx1[i]]=8;
}
void foodprintf2()
{
	int i;
	for(i=1;i<=numfood2;i++)
	map[foody2[i]][foodx2[i]]=7;
}

void build1()
{
	if(direct1==left)
	{
		if(map[y1+1][x1-1]!=0)
		{
			map[y1+1][x1-1]=9;
			return;
		}
		else return;
	}
	else if(direct1==right)
	{
		if(map[y1+1][x1+1]!=0)
		{
			map[y1+1][x1+1]=9;
			return;
		}
		else return;
	}
		else if(direct1==up)
	{
		if(map[y1-1][x1]!=0)
		{
			map[y1-1][x1]=9;
			return;
		}
		else return;
	}
		else if(direct1==down)
	{
		if(map[y1+3][x1]!=0)
		{
			map[y1+3][x1]=9;
			return;
		}
		else return;
	}
}
void build2()
{
	if(direct2==left)
	{
		if(map[y2+1][x2-1]!=0)
		{
			map[y2+1][x2-1]=9;
			return;
		}
		else return;
	}
	else if(direct2==right)
	{
		if(map[y2+1][x2+1]!=0)
		{
			map[y2+1][x2+1]=9;
			return;
		}
		else return;
	}
		else if(direct2==up)
	{
		if(map[y2-1][x2]!=0)
		{
			map[y2-1][x2]=9;
			return;
		}
		else return;
	}
		else if(direct2==down)
	{
		if(map[y2+3][x2]!=0)
		{
			map[y2+3][x2]=9;
			return;
		}
		else return;
	}
}

void StartUp()
{
	int position_x=15,position_y=width/3;
	int i,j;
	char ch;
	system("color f4");
	system("mode con cols=50 lines=25");
	for(i=0;i<height/2;i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==position_x&&j==position_y)
			{ 
				printf("火柴人堡垒之夜");
				j+=13;
			} 
			else
			printf(" ");
		}
	}
	for(i=0;i<width;i++)
	printf("-");
	printf("\n");
	for(i=0;i<14;i++)
	printf(" ");
	printf("PRESS SHIFT TO START\n");
	ch=getch();
	if(ch)return;
}
