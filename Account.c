#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdbool.h>

typedef struct
{
    char *fName;
    char *address;
    short int NID;
    short int age;
    short int bankAccID;
    char *guardianName;
    short int guardianNID;
    char accoutStatus;
    int balance;
    int password;
}Bank_Account;

struct node
{
  Bank_Account *Acc;
  struct node *next;
};

// Setters:
void set_Fname(Bank_Account* account, char* name);
void set_address(Bank_Account* account, char* address);
void set_NID(Bank_Account* account, short int nid);
void set_Age(Bank_Account* account, short int age);
void set_bankAccID(Bank_Account* account, short int bankAccID);
void set_guardianName(Bank_Account* account, char* guardian_name);
void set_guardianNID(Bank_Account* account, short int guardianNID);
void set_accoutStatus(Bank_Account* account, char c);
void set_balance(Bank_Account* account, short int balance);
void set_password(Bank_Account* account, short int password);

// Getters:
char* get_Fname(Bank_Account* account);
char* get_address(Bank_Account* account);
short int get_NID(Bank_Account* account);
short int get_Age(Bank_Account* account);
short int get_bankAccID(Bank_Account* account);
char* get_guardianName(Bank_Account* account);
short int get_guardianNID(Bank_Account* account);
char get_accoutStatus(Bank_Account* account);
int get_balance(Bank_Account* account);
short int get_password(Bank_Account* account);


// Rendom numbers for passowrds and Account IDs
int returnRandoms(int lower, int upper);


//linked list functions:

void display_AllSavedAccountsData(struct node *head);

struct node* get_Head();

struct node* searchAccNode(struct node* head, int BankID);




int main(int argc, char *argv[])
{



    return 0;
}

int returnRandoms(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

Bank_Account* CreateAcc(){
    
    Bank_Account * acc = (Bank_Account*) malloc(sizeof(Bank_Account));
    acc->bankAccID = returnRandoms(10000 ,99999);
    acc->password = returnRandoms(1000 ,9999);
    acc->accoutStatus = 'A';
    return acc;
}

void set_Fname(Bank_Account* account, char* name){
    
    account -> fName = strdup(name);
}

char* get_Fname(Bank_Account* account){
    
    return account -> fName;
}

void set_address(Bank_Account* account, char* address){
    
    account -> address = strdup(address);
}

char* get_address(Bank_Account* account){
    
    return account -> address;
}

void set_NID(Bank_Account* account, short int nid){
    
    account -> NID = nid;
}

short int get_NID(Bank_Account* account){
    
    return account -> NID;
}

void set_Age(Bank_Account* account, short int age){
    
    account -> age = age;
}

short int get_Age(Bank_Account* account){
    
    return account -> age;
}

void set_bankAccID(Bank_Account* account, short int bankAccID){
    
    account -> bankAccID = bankAccID;
}

short int get_bankAccID(Bank_Account* account){
    
    return account -> bankAccID;
}

void set_guardianName(Bank_Account* account, char* guardian_name){
    
    account -> guardianName = strdup(guardian_name);
}

char* get_guardianName(Bank_Account* account){
    
    return account -> guardianName;
}

void set_guardianNID(Bank_Account* account, short int guardianNID){
    
    account -> guardianNID = guardianNID;
}

short int get_guardianNID(Bank_Account* account){
    
    return account -> guardianNID;
}

void set_accoutStatus(Bank_Account* account, char c){
    
    account -> accoutStatus = c;
}

char get_accoutStatus(Bank_Account* account){
    
    return account -> accoutStatus;
}

void set_balance(Bank_Account* account, short int balance){
    
    account -> balance = balance;
}

int get_balance(Bank_Account* account){
    
    return account -> balance;
}

void set_password(Bank_Account* account, short int password){
    
    account -> password = password;
}

short int get_password(Bank_Account* account){
    
    return account -> password;
}

void display_AllSavedAccountsData(struct node *head){
    struct node *temp = head;
    printf("\n\nList elements are - \n");
    printf("\nFull_Name,Full_Address,National_ID,Age,Bank_Account_ID,Guardian,Guardian_National_ID,Account_Status,Balance,Password\n");
    while(temp != NULL) {
    // printf("\nAccount Fullname: %s --->\n",temp->Acc->fName);
    // printf("Account ID %d --->\n",temp->Acc->bankAccID);
    // printf("-------------------\n");
    printf("%s,%s,%d,%d,%d,%s,%d,%c,%d,%d\n",temp->Acc->fName,temp->Acc->address,temp->Acc->NID,temp->Acc->age,temp->Acc->bankAccID,temp->Acc->guardianName,temp->Acc->guardianNID,temp->Acc->accoutStatus,temp->Acc->balance,temp->Acc->password);
    temp = temp->next;
}
    printf("\n");
}

struct node* get_Head()
{
    int a;
}

void storeNewAcc (struct node *head, Bank_Account* account)
{
    //stroring at the begenning of the linked list
    struct node *newNode;
    // newNode = malloc(sizeof(struct node));
    newNode->Acc = account;
    newNode->next = head;
    head = newNode;
}

/// Search for an Account node ..

struct node* searchAccNode(struct node* head, int BankID) 
{
    struct node* current = head;
    while (current != NULL) {
        if (current->Acc->bankAccID == BankID) return current;
        current = current->next;
    }
    if (current == NULL){
        printf("Bank account ID does not exist");
        return current;
    }   
}



