/*Write a program to print the strings which are palindrome in the list of strings.*/
#include<stdio.h>
#include<string.h>
void palindrome(char str[30])
{ int i,l=0,flag=0;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    { if(str[i]!=str[(l-1)-i]){
        flag=1;
        break;
    }
    }
    if(flag==1)
        printf("%s is not palindrome\n",str);
    else
        printf("%s is palindrome\n",str);
}
int main()
{char str[5][30];
  int i,j;
  printf("enter 5 strings to check palindrome:\n");
    for(i=0;i<5;i++)
    { gets(str[i]);
    }
    printf("*********************\n");
     for(i=0;i<5;i++)
     { palindrome(str[i]);
     }
return 0;
}
