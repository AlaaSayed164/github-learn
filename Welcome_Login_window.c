#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE        100
 //commint
int Welcome_fn()
    {
		int choice;
		char name[MAX_SIZE];
		char password[MAX_SIZE];
		printf("\n\t\t-------------   WELCOME TO OUR Bank   -------------\n");
			do
			{
				printf("\n\t\t\t===================================\n");
				printf("\n\tPlease Enter your choice\n");
				printf("\t1-ADMIN WENDOW\n\t2-CLIENT WENDOW\n\t3-EXIT\n");
				printf("\n\t\t\t===================================\n\n");
				scanf("%d",&choice);

				switch(choice)
				{
					case 1:
						printf("Enter your name\n");
						scanf("%d",&name);
						printf("Enter the password\n");
						scanf("%d",&password);
						break;

					case 2:
						printf("Enter your name\n");
						scanf("%d",&name);
						printf("Enter the password\n");
						scanf("%d",&password);
						break;

					case 3:
						printf("EXIT\n");
						break;
					default:
						printf("wrong choice\n");
				}
			}while(choice != 3);
	}




int main()
{
	Welcome_fn();
}