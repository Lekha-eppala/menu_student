#include<stdio.h>
#include<stdlib.h>
struct details
{
    char name[30];
    int roll_no;
    int subjects;
    int marks;
    
}student[10];

void create(int x)
{
    int n,i;
    printf("How many students data you want to create: ");
    scanf("\n %d",&n);
    for(i=0;i<n;i++)
       {
            printf("-----------------------------------------");
            printf("\n\tEnter Details of Student=%d",i+1);
            printf("\n-----------------------------------------");
            printf("\nName of the student : ");
            scanf("%s",&student[i].name);
            printf("Roll no of the student   : ");
            scanf("%d",&student[i].roll_no);
            printf("no of the subjects  : ");
            scanf("%d",&student[i].subjects);
            printf("Marks of the student  : ");
            scanf("%d",&student[i].marks);

       }
    
}

void display(int x)
{
    int i;
    printf("\nList of All Students:\n");
    printf("-------------------------------\n");
    printf("Name\tRollno\tsubjects\tMarks\n");
    printf("--------------------------------\n");
    for(i=0;i<x;i++)
        {
            printf("%s\t  %d\t  %d\t \t%d\n",student[i].name,student[i].roll_no,student[i].subjects,student[i].marks);
        }
    printf("\n");
}

void search(int x)
{
    int id,i;
       printf("\nEnter Student's Roll no to be Searched : ");
       scanf("%d",&id);
       printf("---------------------------------------------------");
       for(i=0;i<x;i++)
       {
            if(student[i].roll_no==id)
            {
                 printf("\nName        : %s",student[i].name);
                 printf("\nRoll no     : %d",student[i].roll_no);
                 printf("\nsubjects   : %d",student[i].subjects);
                 printf("\nMarks       : %d\n",student[i].marks);
            }
       }
    
}


int main()
{
    int choice=0,i;
    while(1)
    {
        printf("\n \n");
        printf("\nMenu:\n");
        printf("1. Create student data \n");
        printf("2. Display\n");
        printf("3. search student\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            {
                create(choice);
                break;
                
            }
            
            case 2:
            {
                 display(choice);
                 break;
            }
            
            case 3:
            {
                search(choice);
                break;
            }
            
            case 4:
            {
                printf("exit");
                exit(0);
                
            }
            
            
        }
}
}



