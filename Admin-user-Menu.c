#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>

struct Account_Info
{
    int accNo;
    char owner[];
};

boolean Open_existing_account(struct Account_Info *account, char *filename) { return TRUE; }
void Make_transactions(struct Account_Info *account) {}
void Get_Cash(struct Account_Info *account) {}
void Deposit_in_Account(struct Account_Info *account) {}
void Change_Account_Password(struct Account_Info *account, char *filename) {}
void client_Main_menu(struct Account_Info *account, char *filename)
{
    boolean check = FALSE;
    int opt;
    do
    {
        // system("cls");
        printf("Press 1 To Open existing account.\n");
        printf("Press 2 To Make transactions.\n");
        printf("Press 3 To Get Cash.\n");
        printf("Press 4 To Deposit in Account.\n");
        printf("Press 5 To Return to main menu.\n");
        printf("Press 6 To Exit the System\n");
        printf("Enter Your Option: ");
        scanf("%d", &opt);
        system("cls");
        switch (opt)
        {
        case 1:
            Open_existing_account(account, filename);
            getch();
            break;
        case 2:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Make_transactions(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            printf("fail to open exist account.\n");

            break;
        case 3:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Get_Cash(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 4:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Deposit_in_Account(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 5:
            break;
        case 6:
            printf("System Turning Off.");
            break;
        default:
            printf("Wrong Input.\n");
            break;
        }
    } while (opt != 6);
}
void Admin_Main_menu(struct Account_Info *account, char *filename)
{
    boolean check = FALSE;
    int opt;
    do
    {
        system("cls");
        printf("Press 1 To Open existing account.\n");
        printf("Press 2 To Change Account Password.\n");
        printf("Press 3 To Make transactions.\n");
        printf("Press 4 To Get Cash.\n");
        printf("Press 5 To Deposit in Account.\n");
        printf("Press 6 To Return to main menu.\n");
        printf("Press 7 To Exit \n");
        printf("Enter Your Option: ");
        scanf("%d", &opt);
        system("cls");
        switch (opt)
        {
        case 1:
            Open_existing_account(account, filename);
            getch();
            break;
        case 2:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Change_Account_Password(account, filename);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 3:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Make_transactions(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 4:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Get_Cash(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 5:
            check = Open_existing_account(account, filename);
            if (check == TRUE)
            {
                Deposit_in_Account(account);
                getch();
            }
            else
            {
                printf("fail to open exist account.\n");
            }
            break;
        case 6:
            break;
        case 7:
            printf("System Turning Off.");
            break;
        default:
            printf("Wrong Input.\n");
            break;
        }
    } while (opt != 7);
}

int main(int argc, char *argv[])
{
    struct Account_Info ss;
    ss.accNo = 5545;
    client_Main_menu(&ss, "dfdgd");
    Admin_Main_menu(&ss, "dfdgd");
}