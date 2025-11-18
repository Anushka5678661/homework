
#include<stdio.h>
int main()
{
    char name[50];
    int choice;
    int a , b , c;
    int sum=0 ;
    printf("Enter your Name:");
    scanf("%s", &name);
    printf("Display instructions: Total time limit is 30 minutes\n");
    printf("There are 5 Questions. you will get +4 for each correct answer and -1 for incorrect answer\n.");
    printf("Enter the Question number you want to attempt:");
    scanf("%d", &choice); 
    switch(choice)
    {
    case 1:
    printf("Q1. what is square of 2\n");
    printf("1. 3\n 2. 4\n 3. 6\n");
    printf("Enter the correct option:");
    scanf("%d", &a);
    switch(a)
    {
        case 1: sum= sum-1;
        break;
        case 2: sum= sum+4;
        break;
        case 3: sum= sum-1;
        break;
        default:
        printf("Incorrect");
    }
    case 2:
    printf("Q2. when did india got freedom:\n");
    printf("1. 1947\n 2. 1990\n 3.1880\n");
    printf("Enter the correct option:");
    scanf("%d", &b);
     switch(b)
    {
        case 1: sum= sum+4;
        break;
        case 2: sum= sum-1;
        break;
        case 3: sum= sum-1;
        break;
        default:
        printf("Incorrect");
    }
    
    case 3:
    printf("Q3. total number of alphabets:\n");
    printf("1. 27\n 2. 26\n 3.30\n");
    printf("Enter the correct option:");
    scanf("%d", &c);
    switch(c)
    {
        case 1: sum= sum-1;
        break;
        case 2: sum= sum+4;
        break;
        case 3: sum= sum-1;
        break;
        default:
        printf("incorrect answer");
    }
    
    }
   printf("Congratulations %s you got %d marks", name , sum);
    
    return 0;
}