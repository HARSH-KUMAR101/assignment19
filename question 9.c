/*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/
void fact()
{ int num,i,sum=1;
    printf("enter a number to calculate factorial: ");
    scanf("%d",&num);
       for(i=1;i<=num;i++)
       {sum=sum*i;
       }
         printf("\nfactorial of given number is %d",sum);
}
int main()
{ char s[][20]={"harsh@123","shivam@123","abhishek@123","ajay@123"};
  char user[20];
  int i;
    printf("enter your username: ");
    gets(user);
      for(i=0;i<4;i++)
      { if(strcmp(s[i],user)==0){
          fact();
          break;
       }
        else if(strcmp(s[i],user)!=0){
            printf("\nenter a valid username");
            break;
        }
      }
 return 0;
}
