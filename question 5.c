/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
#include<stdio.h>
int main()
{char email[5][30];
  int i,j,flag=0;
  printf("enter 5 emails:\n");
    for(i=0;i<5;i++)
    { gets(email[i]);
    }
    printf("<<<< missing @ in below mails >>>>\n");
    for(i=0;i<5;i++)
    {  flag=0;
        for(j=0;email[i][j]!='\0';j++)
       { if(email[i][j]=='@')
           flag=1;
       }
       if(flag==0)
         puts(email[i]);
    }
 return 0;
}
