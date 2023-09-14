#include <stdio.h>
#include <string.h>
int main (){
    //Challenge 1

    int age ;
    char first_name [10],last_name[10], phone_number[10],sexe[55];
    

    printf("Enter your name:\n");
    scanf("%s",&first_name);
    printf("Enter your last name:\n");
    scanf("%s",&last_name);
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your sexe:\n");
    scanf("%s",&sexe);
    printf("Enter your phone number:\n");
    scanf("%s",&phone_number);
   
    printf("Your name is:%s\n",first_name);
    printf("Your last name is:%s\n",last_name);
    printf("Your age is:%d\n",age);
    printf("Your sexe is:%s\n",sexe);
    printf("Your phone number is:%s\n",phone_number);
   
   



    return 0 ;
}

