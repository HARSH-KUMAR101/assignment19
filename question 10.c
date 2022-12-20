/*Create an authentication system. It should be menu driven.*/
int main()
{ char password[10],username[10],ch;
  int i;
    printf("enter user name: ");
    gets(username);
      printf("enter a password of 8 characters: ");
       for(i=0;i<8;i++)
       { ch=getchar();
         password[i]=ch;
          ch='*';
          printf("%c",ch);
       }
       password[i]='\0';
       printf("\nyour password is: ");
         for(i=0;i<8;i++)
         {
             printf("%c",password[i]);
         }

 return 0;
}
