#include<stdio.h>
#include<windows.h>
#include<stdlib.h> 
#include<math.h>
#define I 8
#define R 8*17
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(void)
{
	int i,j;
	system("color BD");
	for(i=10;i<=20;i++)
	  {
	  	gotoxy(i,10);
	  	Sleep(50);
	  	printf("��");
	  }
	  
	for(i=6;i<=13;i++)
	  {
		gotoxy(15,i);
		Sleep(50);
		printf("��");
  	  }
 	
	for(i=14;i<=16;i++)
	  {
		gotoxy(12,i);
		Sleep(50);
		printf("��");
	  }
	
	for(i=12;i<=17;i++)
	  {
	  	gotoxy(i,14);
	  	Sleep(50);
	  	printf("��");
	  }

	for(i=14;i<=16;i++)
	  {
		gotoxy(18,i);
		Sleep(50);
		printf("��");
	  }
	 
	 for(i=13;i<=16;i++)
	   {
	   	gotoxy(i,16);
	   	Sleep(50);
	   	printf("��");
	   }//�� 

	for(i=6;i<=13;i++)
	  {
		gotoxy(25,i);
		Sleep(50);
		printf("��");
  	  }
    
    for(i=0;i<=3;i++)
    {
    	gotoxy(24-i,14+i);
        Sleep(50);
        printf("��");
	}
	
	for(i=27;i<=32;i++)
	{
		gotoxy(i,6);
		Sleep(50);
		printf("��");
	}
	
	for(i=7;i<=16;i++)
	  {
		gotoxy(33,i);
		Sleep(50);
		printf("��");
  	  }
	gotoxy(31,17);
	Sleep(50);
	printf("��");
	gotoxy(30,16);
	Sleep(50);
	printf("��");
		
	for(int i=27;i<=30;i++)
	{
		gotoxy(i,10);
		Sleep(50);
		printf("��");
	}		


	for(i=27;i<=30;i++)
	{
		gotoxy(i,13);
		Sleep(50);
		printf("��");
	}	//��
	
	for(i=50;i<=59;i++)
	{
		gotoxy(i,7);
		Sleep(50);
		printf("��");
	}	
      
	for(i=10;i<=16;i++)
	{
		gotoxy(45,i);
		Sleep(50);
		printf("��");
	}
	  
	for(i=46;i<=63;i++)
	{
		gotoxy(i,10);
		Sleep(50);
		printf("��");
	}  
	  
	for(i=10;i<=15;i++)
	{
		gotoxy(65,i);
		Sleep(50);
		printf("��");
	}
	
	gotoxy(63,16);
	Sleep(50);
	printf("��");
	gotoxy(62,15);
	Sleep(50);
	printf("��");
	
	for(i=8;i<=15;i++)
	{
		gotoxy(54,i);
		Sleep(50);
		printf("��");
	}
	
	gotoxy(50,11);
	Sleep(50);
	printf("��");
	gotoxy(51,12);
	Sleep(50);
	printf("��");
	gotoxy(50,13);
	Sleep(50);
	printf("��");
	gotoxy(51,14);
	Sleep(50);
	printf("��");
	gotoxy(58,11);
	Sleep(50);
	printf("��");
	gotoxy(59,12);
	Sleep(50);
	printf("��");
	gotoxy(58,13);
	Sleep(50);
	printf("��");
	gotoxy(59,14);
	Sleep(50);
	printf("��");//��
	
	for(i=82,j=6;i>=78;i--,j++)
    {
	  	gotoxy(i,j);
	  	Sleep(50);
	  	printf("��");
	}
	gotoxy(76,11);
	Sleep(50);
	printf("��");   
    gotoxy(74,12);
    Sleep(50);
    printf("��");
	
	for(i=83,j=7;i<=85;i++,j++)
	{
		gotoxy(i,j);
		Sleep(50);
		printf("��");
	}
	Sleep(50);
	gotoxy(87,10);
	printf("��");
	Sleep(50);
	//����ͷ 
	
	Sleep(50);
	gotoxy(82,10);
	printf("��");
	Sleep(50);
	gotoxy(83,11);
	printf("��");
	Sleep(50);
	
	for(i=80;i<=84;i++)
	{
		gotoxy(i,13);
		Sleep(50);
		printf("��");
	}
    gotoxy(84,14);
	Sleep(50);
	printf("��"); 
	gotoxy(83,15);
	Sleep(50);
	printf("��");
	gotoxy(80,15);
	Sleep(50);
	printf("��");
	gotoxy(81,16);
	Sleep(50);
	printf("��");
	gotoxy(82,17);
	Sleep(50);
	printf("��");//��
	Sleep(50);
	 
	for(i=90;i<=94;i++)
	{
		gotoxy(i,9);
		Sleep(50);
		printf("��");
	}
	
	for(i=10;i<=15;i++)
	{
		gotoxy(94,i);
		Sleep(50);
		printf("��");
	}
	Sleep(50);
	gotoxy(93,16);
	printf("��");
    gotoxy(91,15);
    printf("��");
    
    Sleep(50);
	gotoxy(91,11);
	printf("��");
	Sleep(50);
	gotoxy(90,13);
	printf("��");
	Sleep(50);
	gotoxy(92,12);
	printf("��");//ϰ1 
	
	for(i=97;i<=101;i++)
	{
		gotoxy(i,9);
		Sleep(50);
		printf("��");
	}
	
	for(i=10;i<=15;i++)
	{
		gotoxy(101,i);
		Sleep(50);
		printf("��");
	}
	Sleep(50);
	gotoxy(100,16);
	printf("��");
    gotoxy(98,15);
    printf("��");
    
    Sleep(50);
	gotoxy(98,11);
	printf("��");
	Sleep(50);
	gotoxy(97,13);
	printf("��");
	Sleep(50);
	gotoxy(99,12);
	printf("��");//��
	

	  Sleep(10000);
} 
