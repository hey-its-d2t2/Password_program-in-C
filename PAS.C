#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
int main()
{
	char name[20];
	char name2[20];
	char pas[6];
	char pas2[6];
	int j=0,k=0;
	clrscr();
	gotoxy(22,10);
	printf("ENTER NAME : ");
	gets(name);
	gotoxy(22,11);
	printf("ENTER PASWARD : ");
	gets(pas);
	/*
	while((pas[i]=getch())!=13)
	{
		printf("*");
		sound(1000);
		i++;
		delay(100);
		nosound();
	}
	pas[i]='\0';


	printf("\nNAME : %s",name);
	printf("\nPASWARD : %s",pas);
	printf("\n__________________________________\n");
	printf("__________________________________\n");
	*/
	delay(100);
	l:
	fflush(stdout);
	clrscr();
	gotoxy(22,10);
	printf("ENTER NAME : ");
	while((name2[k]=getch())!=13)
	{
		printf("*");
		sound(1000);
		delay(100);
		k++;
		nosound();
	}
	name2[k]='\0';
	gotoxy(22,11);
	printf("ENTER PASWARD : ");
	while((pas2[j]=getch())!=13)
	{
		printf("*");
		sound(1000);
		j++;
		delay(100);
		nosound();
	}
	pas2[j]='\0';
	/*
	printf("\n-------------------------------");
	printf(" \n------------------------------");
	printf("\nNAME : %s",name2);
	printf("\nPASWARD : %s",pas2);
	//if(strcmp(pas,pas2)==0)
	*/
	if((strcmp(name,name2)==0) && (strcmp(pas,pas2)==0))
	{
			clrscr();
			gotoxy(22,10);
			printf("\n SUCCESSFULLY LOGINED...\n THANK YOU");
	}
	else
	{       clrscr();
		gotoxy(22,10);
		printf(" INCORRECT USER NAME\n OR \n INCORRECT PASWORD ");
	       //	getch();
	       delay(1000);
	       goto l;
	}

	getch();
	return 0;
}
