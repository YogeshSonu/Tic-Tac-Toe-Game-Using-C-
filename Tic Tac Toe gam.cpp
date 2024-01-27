/*           
	Name: TIC TAC TOE GAME
	Copyright: 
	Author: YOGESH PUROHIT
	Date: 24/05/22 14:53
	Description: C++ PROGRAM 
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
char sq[10]={'o','1','2','3','4','5','6','7','8','9'};
int expert();
void playerchart();
int main()
{
	int gamer=1,i,choice;
	char sc;
	do
	{
		playerchart();
		gamer=(gamer%2)?1:2;
		cout<<"Gamer "<<gamer<<" Enter a number:";
		cin>>choice;
		
		sc=(gamer==1)?'X':'0';
		
		if(choice==1 && sq[1]=='1')
			sq[1]=sc;
		else if(choice==2 && sq[2]=='2')
			sq[2]=sc;
		else if(choice==3 && sq[3]=='3')
			sq[3]=sc;
		else if(choice==4 && sq[4]=='4')
			sq[4]=sc;
		else if(choice==5 && sq[5]=='5')
			sq[5]=sc;
		else if(choice==6 && sq[6]=='6')
			sq[6]=sc;
		else if(choice==7 && sq[7]=='7')
			sq[7]=sc;
		else if(choice==8 && sq[8]=='8')
			sq[8]=sc;
		else if(choice==9 && sq[9]=='9')
			sq[9]=sc;
			
		else
		{
				cout<<"\nInvalid Move";
				gamer--;
				getch();
		}
		i=expert();
		gamer++;
	}while(i==-1);
	playerchart();
	if(i==1)
	{
		cout<<"\n==>\aGamer "<<--gamer<<" Win";
	}
	else
	{
		cout<<"\n==>\aGame Draw";
	}
	getch();
	return 0;
}
int expert()
{
	if(sq[1]==sq[2] && sq[2]==sq[3])
		return 1;
	else if(sq[4]==sq[5] && sq[5]==sq[6])
		return 1;
	else if(sq[7]==sq[8] && sq[8]==sq[9])
		return 1;
	else if(sq[1]==sq[4] && sq[4]==sq[7])
		return 1;
	else if(sq[2]==sq[5] && sq[5]==sq[8])
		return 1;
	else if(sq[3]==sq[6] && sq[6]==sq[9])
		return 1;
	else if(sq[1]==sq[5] && sq[5]==sq[9])
		return 1;
	else if(sq[3]==sq[5] && sq[5]==sq[7])
		return 1;
	else if(sq[1]!='1'&& sq[2]!='2'&& sq[3]!='3'&& sq[4]!='4'&& sq[5]!='5'&& sq[6]!='6'&&
	sq[7]!='7'&& sq[8]!='8'&& sq[9]!='9')
	 	return 0;
	else 
		return -1;
		
}
void playerchart()
{
	system("cls");
	cout<<"\n\n\t\t\t\t*****************************************";
	cout<<"\n\n\t\t\t\t\tTIC TAC TOE GAME OF 2 GAMERS";
	cout<<"\n\n\t\t\t\t*****************************************\n";
	cout<<"Gamer 1 -(X) & Gamer 2 -(0)\n\n\n";
	cout<<"     |     |  \n";
	cout<<"  "<<sq[1]<<"  |"<<"  "<<sq[2]<<"  |"<<"  "<<sq[3]<<endl;
	cout<<"_____|_____|_________\n";
	
	cout<<"     |     |  \n";
	cout<<"  "<<sq[4]<<"  |"<<"  "<<sq[5]<<"  |"<<"  "<<sq[6]<<endl;
	cout<<"_____|_____|_________\n";
	
	cout<<"     |     |  \n";
	cout<<"  "<<sq[7]<<"  |"<<"  "<<sq[8]<<"  |"<<"  "<<sq[9]<<endl;
	cout<<"     |     |   \n";
	
}
