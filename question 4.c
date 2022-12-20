/*Write a program to search a string in the list of strings.*/
#include<stdio.h>
#include<string.h>
int main()
{ char name[5][20],temp[20];
  int i,j,flag=0;
  printf("enter 5 names:\n");
    for(i=0;i<5;i++)
    { gets(name[i]);
    }
  printf("enter the name you want to search: ");
  gets(temp);
    for(i=0;i<5;i++)
    { if(strcmp(name[i],temp)==0)
        flag=1;
    }
    if(flag==1)
        printf("your search is available in the string\n");
    else
        printf("your search is not available in the string\n");
 return 0;
}
