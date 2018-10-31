#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "playgame1.h"
#include "Userdata.h"
#include "Boarddata.h"
/*
		please follow the given commands as given way you can easily operate the game with 
		all options of replay and leader board with both ways 
		as 2X2 and 4X4.
		the process is continue in a loop untill you press [4] to exit.
		when the game is in ending condition the game automatically ended.
		bythe output youcan see wheather you win or lose.
		
*/

int main()
{
	int n,choice,k=0;
	while (1)
	{
		system("cls");
		printf("enter your choice\n");
		printf("\n1.Play game\n2.Replay\n3.Leader board\n4.Exit\n ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			k=playGame();
			break;
		case 2:
			k=rePlay();
			break;
		case 3:
			k=view_Leader_Board();
			break;
		case 4:
			k = 1;
			break;
		default:
			printf("Invalid option.Please enter valid option\n");
			break;
		}
		if (k == 1){ break; }
	}
	system("pause");
	return 0;
}
